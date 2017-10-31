import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

class BinaryFileReader
{
    public void readBinaryFile(File file, Cache c)
    {
        FileInputStream fr = null;
        BufferedInputStream br = null;
        try
        {
            fr = new FileInputStream(file);
            br = new BufferedInputStream(fr);
            int input = -1;
            byte[] buff = new byte[3];
            int address;
            input = br.read(buff, 0, 3);
            while (input != -1)
            {
                address = ((((buff[2] & 0xFF) << 8) + (buff[1] & 0xFF) << 8) + (buff[0] & 0xFF));
                c.read(address);
                input = br.read(buff, 0, 3);
                // System.out.println("Binary: " + Integer.toBinaryString(address));
                // System.out.println("Hex: "+ Integer.toHexString(address));
            }
        }
        catch (IOException error)
        {
            System.out.println("File not found. Program exited.");
        }
        finally
        {
            try
            {
                if (fr != null)
                    fr.close();
                if (br != null)
                    br.close();       
            }
            catch (Exception e)
            {
                e.printStackTrace();
            }
        }
    }
}
