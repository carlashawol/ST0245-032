
/**
 * Write a description of class p1 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.concurrent.ThreadLocalRandom;
import java.util.Arrays;
public class p1
{
   public static void main (String [] args){
       int [] a = randomN(1000,-10,10);
       //System.out.println(sumArray(a,100));
       //System.out.println(fib(45));
       //System.out.println(arrayMax(a,100));
    }
    /*
     * Suma de los elementos de un arreglo
     */
   public static int sumArray (int []a, int n){
        if(n==0)return a[n];return a[n]+sumArray(a,n-1);
    }
    /*
     * Fibonacci
     */
   public static int fib(int n){
        if(n<=1)return n;return fib(n-1)+fib(n-2);  
    }
    /*
     * Da el mayor de los elementos del arreglo
     */
   public static int arrayMax(int [] a, int n){
        if (n==0)return a[0];return Math.max(a[n],arrayMax(a,n-1));
    }
    /*
     * Genera los numeros de un arreglo
     */
   public static int[] randomN(int n, int min, int max){
       int [] a = new int [n];
       for(int i=0;i<n;i++)
       a[i]= ThreadLocalRandom.current().nextInt(min,max+1);
       return a;
    }    
}
