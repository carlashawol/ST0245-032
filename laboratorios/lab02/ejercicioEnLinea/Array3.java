
/**
 * Write a description of class Array3 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Array3
{
     //maxSpan
       public int maxSpan(int[] nums) {
	int cantidadEle = 0;
	int tamano=nums.length;
	int A;
	int j;
	for(int i = 0; i < tamano; i++){
		for(j = tamano - 1; nums[i] != nums[j]; j--);
		A = 1 + j - i;
		if(A > cantidadEle){
			cantidadEle = A;
                 }
               
	}
	return cantidadEle;
      }
      //seriesUp
       public int[] seriesUp(int n) {
	int[] Myarray = new int[n*(n+1)/2];
	int k =0 ;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++,k++)
	            Myarray[k] = j;
               
	}
	return Myarray;
      }
      //canBalance
       public boolean canBalance(int[] nums){
	int tamano = nums.length;
        int izq = 0;
	int der;
	for(int i = 0; i < tamano - 1; i++)
	    izq += nums[i];
	    der = nums[tamano-1];
	for(int i = tamano - 2; i > 0; i--){
		if(izq == der){
			return true;
                }
		izq -= nums[i];
		der += nums[i];
	}
	return (izq == der);
      }
     //fix34
       public int[] fix34(int[] nums) {
       int j=1;
       int tamano = nums.length;
	  for(int i = 0; i < tamano - 1; i++){
             if(nums[i] == 3 && nums[i+1] != 4){
		   for(; nums[j] != 4; j++){
		   nums[j] = nums[i+1];
		   nums[i+1] = 4;
	     }
	    }
	  return nums;
       }    
       return nums;
     }
     //squareUp
       public int[] squareUp(int n){
	int[] arr = new int[n*n];
	int k;
	for(int i=1; i <= n; i++){
	   k = n * i - 1;
	   for(int j = 1; j <= i; j++,k--)
	      
	      arr[k] = j;
           
	}
	return arr;
     }
   
   
}
