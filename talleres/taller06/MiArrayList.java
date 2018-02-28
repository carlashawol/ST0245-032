 
import java.util.Arrays;
/**
 *
 * @author 
 */
public class MiArrayList {
    private int size;
    private static final int DEFAULT_CAPACITY = 10;
    private int elements[]; 
    
    // Inicializa los atributos size en cero y elements como un arreglo de tamaño  DEFAULT_CAPACITY. No, no recibe parámetros. public MiArrayList() {}          // Retorna el tamaño de la lista public int size() {}          // Agrega un elemento e a la última posición de la lista public void add(int e) {}          // Retorna el elemento que se encuentra en la posición i de la lista public int get(int i) {}          // Agrega un elemento e en la posición index de la lista
    public MiArrayList() {
        size = 0;
        elements = new int[DEFAULT_CAPACITY];
    }     

    
    // Retorna el tamaño de la lista 
    public int size() {
        return this.size;
    }   
    
    // Agrega un elemento e a la última posición de la lista
    public void add(int e, int n) {
        int [] a;
        for(int i=elements.length-1;i>=1;i--){
            elements[i]=elements[i-1];
            elements[n]=e;
        }
        if(this.size==DEFAULT_CAPACITY)
        for(int i=0;i<elements.length+10;i++){
            a = new int [DEFAULT_CAPACITY*2];
            a[i]=elements[i];
        }
    }    
    
    
    // Retorna el elemento que se encuentra en la posición i de la lista 
    public int get(int i)throws Exception {
        if(i<=-1 || i>=size-1)
         throw new Exception("out of bounds");
         else
         return elements[i];
    }
    
}
