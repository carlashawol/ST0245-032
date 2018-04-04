
public class UnaTablaDeHash
{
    // instance variables - replace the example below with your own
    private int [] tabla;

 
    public  UnaTablaDeHash(){
   
        tabla = new int [10];
    }

    
    private int funcionHash(String k)
    {
        int x= k.length();
        int acum = 0;
        for(int i=0 ; i<=x; i++)
        {
            acum= acum +((int) k.charAt(i));
        }
        return acum %10;
    }
    
    public int get (String k){
        int posicion = funcionHash(k);
        return tabla[posicion];
    }
    
    
    public void put(String k, int v){
        int posicion = funcionHash(k);
        tabla[posicion] = v;
        
    }
}
