package structures;

import java.util.ArrayDeque;

public class CacheSet
{
    public int[] valid;
    public int[] tag;
    public int[] data;
    public ArrayDeque<Integer> priorityQueue;
    public CacheSet(int lineAmt)
    {
        priorityQueue = new ArrayDeque<Integer>();
        valid = new int[lineAmt];
        tag = new int[lineAmt];
        data = new int[lineAmt];
        for (int i = 0; i < lineAmt; i++)
        {
            priorityQueue.add(i);
            valid[i] = 0;
            tag[i] = 0;
            data[i] = 0;
        }
    }
}
