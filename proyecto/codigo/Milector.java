
/**
 * Write a description of class lector here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.io.*;
public class Milector
{
   public static String linea;
   public static String[] lista;
   public String[] lector()throws IOException{
            File file= new File("C:\\Users\\Sebastian Arboleda B\\Desktop\\abejas.txt");
            BufferedReader reader=new BufferedReader(new FileReader(file));
            linea=reader.readLine();
            int i = 0;
            while((linea = reader.readLine())!=null){
           String[] lista= linea.split(",");
        }
        return lista;
    }
}
