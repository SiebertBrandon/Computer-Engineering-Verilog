package structures;

public class CacheTester
{
    public static void main(String[] args){
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "64", "2"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "64", "4"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "64", "8"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "64", "16"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "256", "2"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "256", "4"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "256", "8"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "FIFO", "256", "16"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "64", "2"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "64", "4"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "64", "8"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "64", "16"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "256", "2"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "256", "4"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "256", "8"});
        CacheReplica.main(new String[]{"TRACE2.DAT", "LRU", "256", "16"});
    }
}
