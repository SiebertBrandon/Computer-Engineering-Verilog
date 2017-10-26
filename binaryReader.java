import java.util.*;
import java.io.*;

class Cache {

    private void readBinaryFile(File file){
        try{
            FileInputStream fr = new FileInputStream(file); //read file input
            BufferedInputStream br = new BufferedInputStream(fr); //buffer
            //DataInputStream in = new DataInputStream(br);
            int input;
            int i;
            byte[] buff = new byte[3]; //8GB
            int address = 0;

            input = br.read(buff, 0, 3);

            while(input != -1){
                input = br.read(buff, 0, 3);
                address = ((((buff[2] & 0xFF) << 8) + (buff[1] & 0xFF) << 8) + (buff[0] & 0xFF));
                // System.out.println("Binary: " + Integer.toBinaryString(address));
                // System.out.println("Hex: "+ Integer.toHexString(address));
            }

        }
        catch(IOException error){
            System.out.println("File not found. Program exited.");
        }
    }

    public static void main(String[] args) {
        Cache cache = new Cache();
        File binaryData = new File("./TRACE1.DAT");
        cache.readBinaryFile(binaryData);



    }
}
