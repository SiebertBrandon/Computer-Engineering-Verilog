package structures;

import java.io.PrintStream;
import java.text.NumberFormat;
import java.util.HashMap;

public class Cache
{
    // private int indexLen;
    private int                        indexMask;
    private int                        tagMask;
    private int                        missCounter;
    private int                        hitCounter;
    PrintStream                        so         = System.out;
    ReplacementPolicy                  p;
    // This HashMap contains our cache contents
    private HashMap<Integer, CacheSet> cacheTable = new HashMap<Integer, CacheSet>();

    // Constructor for this Cache object
    public Cache(ReplacementPolicy p, int linesPerSet, int numSets)
    {
        this.p = p;
        // For every line we wish to populate the cache with
        for (int i = 0; i < numSets; i++)
        {
            // Each set in the cache follows this pattern:
            // V - Tag - Data - V - Tag - Data...
            CacheSet s = new CacheSet(linesPerSet);
            // Place the new set into the cache
            cacheTable.put(i, s);
        }
        int indexLen = (int) Math.log(numSets);
        //so.println("Index Length: " + indexLen);
        indexMask = 1;
        tagMask = 1;
        for (int i = 1; i < indexLen; i++)
        {
            indexMask <<= 1;
            indexMask |= 0x1;
            //so.println("current index mask: " + Integer.toBinaryString(indexMask));
        }
        Integer tmp = indexMask;
        for (int i = 1; i < 24 - (Integer.bitCount(tmp) + 3); i++)
        {
            tagMask <<= 1;
            tagMask |= 0x1;
            //so.println("current tag mask: " + Integer.toBinaryString(tagMask));
        }
        indexMask <<= 3;
        tagMask <<= (Integer.bitCount(tmp) + 3);
        //so.println("current index mask: " + Integer.toBinaryString(indexMask));
        //so.println("current tag mask: " + Integer.toBinaryString(tagMask));
    }

    // This is the method that gets called when we want to read an address
    public void read(int address)
    {
        // The address must first be decoded
        int index = (address & indexMask) >> 3;
        int tag = (address & tagMask) >> Integer.bitCount(indexMask) + 3;
        // System.out.println("Performing READ using index: " + Integer.toBinaryString(index) + " and tag: " + Integer.toBinaryString(tag)
        //        + System.lineSeparator() + "Currently have " + cacheTable.size() + " indecies.");
        CacheSet s = cacheTable.get(index);
        int found = -1;
        for (int i = 0; i < s.tag.length; i++)
        {
            if (s.tag[i] == tag && s.valid[i] == 1) found = i;
        }
        if (found == -1) // We missed
        {
            this.missCounter++;
            switch (this.p)
            {
                case FIFO:
                case LRU:
                    int replacedIndex = s.priorityQueue.remove();
                    s.tag[replacedIndex] = tag;
                    s.valid[replacedIndex] = 1;
                    s.priorityQueue.add(replacedIndex);
                    break;
                default:
                    break;
            }
        }
        else // We hit
        {
            this.hitCounter++;
            switch (this.p)
            {
                case FIFO: // FIFO has no policy to do anything during hits
                    break;
                case LRU: // LRU requires that we put the hit index at the top of the queue
                    boolean que = s.priorityQueue.remove(found);
                    if (que == false) so.println("Something is wrong with the replacement policy");
                    s.priorityQueue.add(found);
                    break;
                default:
                    break;
            }
        }
    }
    public void printResults()
    {
        NumberFormat f = NumberFormat.getPercentInstance();
        f.setMinimumFractionDigits(2);
        so.println("Hits: " + this.hitCounter + System.lineSeparator() + "Misses: " + this.missCounter + System.lineSeparator() + "Miss Rate: "
                + f.format((double) this.missCounter / ((double) this.hitCounter + (double) this.missCounter)));  
        so.println();
    }
}
