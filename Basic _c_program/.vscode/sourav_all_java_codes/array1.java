import java.util.*;

public class array1{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        double[] arr =new double[5];
        double sum=0;

        
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=in.nextDouble();
            sum+=arr[i];
        }
        
        System.out.println("The sum is : "+sum);

    }

}