
/**
 * Write a description of class arreglo here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.io.*;
public class arreglo
{
    public static double distancia(float x1,float y1,float x2,float y2){
        double dist = Math.sqrt( Math.abs((((x2-x1)*(x2-x1))+
        ((y2-y1)*(y2-y1)))));
        return dist;
    }
    public static void main (String [] args)throws IOException{
        Milector obj = new Milector();
        String [] milista = obj.lector();
        for(int i=1;i>=milista.length/2;i=i+2){
            for(int j=1;j>=milista.length/2;j=j+2){
            float x1 = Float.parseFloat(milista[i-1]);
            float y1 = Float.parseFloat(milista[i]);
            float x2 = Float.parseFloat(milista[j-1]);
            float y2 = Float.parseFloat(milista[j]);
            double miDistancia = distancia(x1, y1,x2,y2);
            if(miDistancia != 0){
                if(miDistancia>=-100 && miDistancia<=100){
                    System.out.println("las abejas: "+x1+","+y1+
                    "y"+x2 +","+ y2 + " Estan colicionadas");
                }
            }
        }
        }
    }
}
