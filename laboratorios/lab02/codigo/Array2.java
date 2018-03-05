

public class Array2
{
    //countEvens
   public int countEvents(int[] nums){
       int cont = 0;
       int tamano=nums.length-1;
       for(int i=0;i<=tamano;i++){
           if(nums[i]%2==0){
               cont++;
            }
        }
       return cont;
    }
    // sum13
    public int sum13(int[] nums){
        int sum;
        int tamano=nums.length;
        if(tamano!=0){
            if(nums[0]==13){
                sum=0;
            }else{
                sum=nums[0];
            }
            for(int i=1;i<=tamano-1;i++){
                if(nums[i]==13||nums[i-1]==13){
                    sum=sum;
                }else{
                    sum=sum+nums[i];
                }
            }
        }else{
            sum=0;
        }
        return sum;
    }
    //lucy13
    public boolean lucky13 (int [] nums){
        int tamano=nums.length;
        for(int i=0;i<=tamano-1;i++){
            if(nums[1]==1||nums[i]==3){
                return false;
            }
        }
        return true;
    }
    //bigDiff
    public int bigDiff(int[]nums){
        int max=nums[0];
        int min=nums[0];
        int tamano=nums.length;
        for(int i=0;i<=tamano-1;i++){
            if(max<=nums[i]){
                max=nums[i];
            }
            if(min>=nums[i]){
                min=nums[i];
            }
        }
        return max-min;
    }
    //only14
    public boolean only14(int[] nums){
        int tamano=nums.length;
        for(int i=0;i<=tamano-1;i++){
            if(nums[i]!=4 && nums[i]!=1){
                return false;
            }
        }
        return true;
    }
}
