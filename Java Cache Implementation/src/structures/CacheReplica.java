package structures;

import java.io.File;

public class CacheReplica
{
    public static void main(String[] args)
    {
        File traceIn = new File(args[0]);
        //System.out.println("File Name: " + args[0]);
        ReplacementPolicy p = (args[1].equals("FIFO")) ? ReplacementPolicy.FIFO : (args[1].equals("LRU")) ? ReplacementPolicy.LRU : null;
        //System.out.println("Policy Name: " + args[1]);
        int KN = Integer.parseInt(args[2]);
        ///System.out.println("KN: " + args[2]);
        int K = Integer.parseInt(args[3]);
        //System.out.println("K: " + args[3]);
        int N = KN / K;
        //System.out.println("N: " + N);
        Cache c = new Cache(p, K, N);
        //System.out.println("Cache Created");
        BinaryFileReader bfr = new BinaryFileReader();
        //System.out.println("Reading from trace file...");
        bfr.readBinaryFile(traceIn, c);
        System.out.println("Policy: " + args[1] + ", KN: " + args[2] + ", K: " + args[3]);
        c.printResults();
    }
}
