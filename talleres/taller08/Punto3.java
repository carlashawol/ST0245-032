/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Punto3
{
  
   public static void punto3(String str){
       Stack<Integer> pila = new Stack();
       str.split(" ");
       for(String x: str.split(" ")){
         if (x.equals("+")) 
             pila.push(pila.pop() + pila.pop());
         else if (x.equals("*"))
             pila.push(pila.pop() * pila.pop());
         else if (x.equals("/")){
              int b = pila.pop();
              int a = pila.pop();
              pila.push( a / b);
           }
         else if (x.equals("-")) {
              int b = pila.pop();
              int a = pila.pop();
              pila.push( a - b);
           }
         else
           pila.push(Integer.parseInt(x));
         
       }
       
       System.out.println(pila.pop());
    }
	
public static boolean isNumeric(String str)  
{  
  try  
  {  
    int d = Integer.parseInt(str);  
  }  
  catch(NumberFormatException nfe)  
  {  
    return false;  
  }  
  return true;  
}


	public static void main (String[] args) throws java.lang.Exception
	{
		String usuario = "3 10 5 + *";
		String[] partido = usuario.split(" ");
		System.out.println(Arrays.toString(partido));
		System.out.println(partido);
		Stack<Integer> pila = new Stack();
		for(String elemento : partido)
		{
		    if (isNumeric(elemento))
		        pila.push(Integer.parseInt(elemento));
		    else // elemento es un operador
		    {
		        pila.push(pila.pop() + pila.pop());
		    }
		}
	}
 
}
