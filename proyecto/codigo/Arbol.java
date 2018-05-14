
/**
 * Arbol quadtree de arraylist de abejas
 * 
 * @Sebastian Arboleda Botero
 * @Carla Daniela Rendon
 * @mayo 2018
 */
import java.util.*;
import java.io.*;
class Arbol {
  private  static double xM = 11111;
   private static double yM = 11111;
  private static Nodo raiz;
  public static LinkedList<Abeja> listAbejas = new LinkedList<Abeja> ();
   public static String[] lista = new String[20];
   //Insertar privada, que añade las abejas que resive por parametro a el quadtree
  private static void insertar(Nodo nodo, Abeja abeja){
       if (nodo == null){
           nodo = new Nodo (abeja);
        }else if(nodo.lista.size() < 10){
            nodo.lista.add(abeja);
        }
      if (nodo.lista.size() >= 10 ){
          xM = xM/2;
          yM = yM/2;
          if(abeja.x<xM && abeja.y>yM){
          if (nodo.izqSup == null){
           nodo.izqSup = new Nodo (abeja);
        }
         else{
         insertar(nodo.izqSup, abeja);
        }
    }
    if(abeja.x<xM && abeja.y<yM){
          if (nodo.izqInf == null){
           nodo.izqInf = new Nodo (abeja);
        }
         else{
         insertar(nodo.izqInf, abeja);
        }
    }
    if(abeja.x>xM && abeja.y>yM){
          if (nodo.derSup == null){
           nodo.derSup = new Nodo (abeja);
        }
         else{
         insertar(nodo.derSup, abeja);
        } 
    }
    if(abeja.x<xM && abeja.y<yM){
        if (nodo.derInf == null){
           nodo.derInf = new Nodo (abeja);
        }
         else{
         insertar(nodo.derInf, abeja);
        }
    }
    }
    }
    //Imprimir privadao que Permite mostrar las colisiones en la pantalla
    //en postorden
  private static void imprimir(Nodo nodo){
        if (nodo != null){
           imprimir(nodo.izqSup);
           imprimir(nodo.izqInf);
           imprimir(nodo.derSup);
           imprimir(nodo.derInf);
               for(int i=0;i<=nodo.lista.size()-1;++i){
            for(int j=0;j<=nodo.lista.size()-1;++j){
            double x1 = nodo.lista.get(i).x;
            double y1 = nodo.lista.get(i).y;
            double x2 = nodo.lista.get(j).x;
            double y2 = nodo.lista.get(j).y;
            double dist = distancia(x1,y1,x2,y2);
            if(dist <= 100 && dist >= -100){
            System.out.println("La abeja: "+(x1/111111)*(-1)+","+y1/111111+" colisiona con: "
            +"La abeja: "+(x1/111111)*(-1)+","+y1/111111);
            }
        }
      }
       }
     }
     //Imprimir publico a la vista del usuario
     public static void imprimir(){
       imprimir(raiz);
      }
      //Ecuacion que permite determinar la distancia entre abejas
    public static double distancia(double x1,double y1,double x2,double y2){
        double dist = Math.sqrt( Math.abs((((x2-x1)*(x2-x1))+
        ((y2-y1)*(y2-y1)))));
        return dist;
    }
    //Insertar publico para la vista del usuario
  public static void insertar(Abeja abeja) {
      if (raiz == null)
      raiz = new Nodo(abeja);
      else
      insertar (raiz,abeja);
    }
    //Lectro del archivo que añade las variable a las abejas y las abejas las inserta
    public static void Milector(){
       try{
       String linea;
            FileReader file= new FileReader("C:\\Users\\sarboledab\\Desktop\\ProyectoFinal\\abejas10000.txt");
            BufferedReader reader=new BufferedReader(file);
            while((linea = reader.readLine())!=null){
            String [] lista= linea.split(",");
            Abeja abeja = new Abeja(((Double.parseDouble(lista[0])*111111)*(-1)),Double.parseDouble(lista[1])*111111);
            insertar(abeja);
        }
        reader.close();
    }catch(Exception e){
        System.err.println("El archivo no existe");
        System.exit(0);
    }
}
//metodo main con el medidor de tiempo de ejecucion;
    public static void main (String[]args){
        long startTime = System.nanoTime();
        Milector();
        imprimir();
        long endTime = System.nanoTime() - startTime;
        System.out.println("El tiempo del programa es: "+endTime);
    }
 }

