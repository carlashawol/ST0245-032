
/**
 * Write a description of class Banco here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
public class Banco
{
    public static void filasDeClientes (List<String> fila1,List<String> fila2,
    List<String> fila3,List<String> fila4){
         int tam1= fila1.size()-1;
         int tam2= fila2.size()-1;
         int tam3= fila3.size()-1;
         int tam4= fila4.size()-1;
         int tamaño = tam1+tam2+tam3+tam4;
         for(int i = 0; i<=tamaño; i++){
             if(i<=tam1-1){
               System.out.println("El cajero # 1 atienda a: "+fila1.get(i));
               System.out.println("El cajero # 2 atienda a: "+fila1.get(i+1));
                }
                
             else if (tam2 <= tam1+tam2-1){
               System.out.println("El cajero # 1 atienda a: "+fila2.get(i));
               System.out.println("El cajero # 2 atienda a: "+fila2.get(i+1));
                }
             else if (tam3 <= tam1+tam2+tam3-1){
               System.out.println("El cajero # 1 atienda a: "+fila3.get(i));
               System.out.println("El cajero # 2 atienda a: "+fila3.get(i+1));
                }
             else if (tam2 <= tam1+tam2+tam3+tam4-1){
               System.out.println("El cajero # 1 atienda a: "+fila4.get(i));
               System.out.println("El cajero # 2 atienda a: "+fila4.get(i+1));
                }
                }
            }
         
        }

