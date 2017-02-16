package structures;

import java.io.File;

public class CacheReplica
{
    public static void main(String[] args)
    {
        File traceIn = new File(args[1]);
        ReplacementPolicy p = (args[2].equals("FIFO")) ? ReplacementPolicy.FIFO : (args[2].equals("LRU")) ? ReplacementPolicy.LRU : null;
        int KN = Integer.parseInt(args[3]);
        int K = Integer.parseInt(args[4]);
        int N = KN / K;
        Cache c = new Cache(p, K, N);
        BinaryFileReader bfr = new BinaryFileReader();
        bfr.readBinaryFile(traceIn, c);
    }
}
