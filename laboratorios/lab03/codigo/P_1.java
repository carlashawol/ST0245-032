
/**
 * Subpuntos del punto #01.
 * 
 * @Sebastian Arboleda Botero y Carla Rendon 
 * 
 */
import java.util.*;
public class P_1
{
    public static int multiply(List<Integer> list){
        int acum = 1;
        int i = 0;
        for(Integer elem:list){
            acum = acum * list.get(i);
            i = i + 1;
        }
        return acum;
    }
    
    public static void SmartInsert (List<Integer> list, int data){
        int tamaño = list.size();
        int ultimo = list.get(tamaño-1);
        for (Integer elem:list){
            if (elem == data){
                break;
            }else if(elem == ultimo){
                list.add(data);
            }
        }
    }
    
    public static void ejercicio4 (List<String> neveras, List<String> solicitudes){
      int i = 0;
      if (neveras.size() == solicitudes.size()){
      for (String elem:neveras){
           System.out.println(neveras.get(i)+" "+"="+" "+solicitudes.get(i));
           i = i + 1;
      }
    }
   }
   
   public static void dondeElPivote(List<Integer> lista){
       int tam = lista.size()-1;
       int acum1 = 0;
       int acum2 = 0;
       int j = tam;
       for(int i = 0; i<= tam/2; i++){
           acum1 = acum1 + lista.get(i);
           acum2 = acum2 + lista.get(j);
           j--;
        }
        if((acum1-acum2)>4){
                System.out.println((tam/2)+1);
        }
        if((acum1-acum2)<0){
                System.out.println((tam/2)-1);
        }
       
    }
}
