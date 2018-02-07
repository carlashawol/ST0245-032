
/**
 * @author (Carla Rendón y Sebastián Arango) 
 */
public class ejercicio2
{

    public static void combinacion(String s)
    {
        combinacionaux("", s);
    }

    public static void combinacionaux(String respuesta, String s)
    {
        if(s.length()==0)
        {
            System.out.println(respuesta);
            
        }else{
            combinacionaux(respuesta+s.charAt(0),s.substring(1));
            combinacionaux(respuesta,s.substring(1));
        
        
        }
      }
    }
