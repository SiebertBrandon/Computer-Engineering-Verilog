package structures;

import java.util.HashMap;

public class Cache
{
    // private int indexLen;
    private int                        indexMask;
    private int                        tagMask;
    ReplacementPolicy                  p;
    // This HashMap contains our cache contents
    private HashMap<Integer, CacheSet> cacheTable = new HashMap<Integer, CacheSet>();

    // Constructor for this Cache object
    public Cache(ReplacementPolicy p, int linesPerSet, int numSets)
    {
        p = this.p;
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
        indexMask = 0;
        tagMask = 0;
        for (int i = 0; i < indexLen; i++)
        {
            indexMask += 1;
            indexMask <<= 1;
        }
        Integer tmp = indexMask;
        for (int i = 0; i < 24 - (Integer.bitCount(tmp) + 3); i++)
        {
            tagMask += 1;
            tagMask <<= 1;
        }
        indexMask <<= 3;
        tagMask <<= (Integer.bitCount(tmp) + 3);
    }

    // This is the method that gets called when we want to read an address
    public void read(int address)
    {
        // The address must first be decoded
        int index = address & indexMask;
        int tag = address & tagMask;
        CacheSet s = cacheTable.get(index);
        int found = -1;
        for (int i = 0; i < s.tag.length; i++)
        {
            if (s.tag[i] == tag) found = i;
        }
        if (found == -1) // We missed
        {
            switch (this.p)
            {
                case FIFO:
                case LRU:
                    int replacedIndex = s.priorityQueue.remove();
                    s.tag[replacedIndex] = tag;
                    s.priorityQueue.add(replacedIndex);
                    break;
                default:
                    System.out.println("Shits fucked yo");
                    break;
            }
        }
        else // We hit
        {
            switch (this.p)
            {
                case FIFO:
                    break;
                case LRU:
                    boolean que = s.priorityQueue.remove(found);
                    if (que == false) System.out.println("Something is wrong with the replacement policy");
                    s.priorityQueue.add(found);
                    break;
                default:
                    System.out.println("Shits fucked yo");
                    break;
            }
        }
    }
}
