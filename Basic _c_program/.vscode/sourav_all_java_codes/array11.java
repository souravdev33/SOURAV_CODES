import java.util.Scanner;

public class array11 {
        // Scanner in=new Scanner(System.in);

        // int n;
        // int sum=0;
        // System.out.print("Enter the size of the array : ");
        // n=in.nextInt();
        // int arr[]=new int[n];

        // System.out.printf("Enter %d numbers : ",n);

        // for(int i=0;i<arr.length;i++)
        // {
        //     arr[i]=in.nextInt();
        //     sum+=arr[i];
        // }
        // System.out.println("The sum is : "+sum);
      
public static void main(String[] args) {

  
        int table[] = new int[100];
      for (int k=0; k<table.length; k++)
{
      table[k]= k+1; 
      // table[0] = 1
      // table[1] = 2
}

        // int k;
        // boolean found = false;
        // for (k=0; k < table.length; k++)
        // {
        //     if (table[k]== 300 ) 
        //     {            
        //             System.out.println("Found at position " + k); 
        //             found = true;   
        //     }
        // }
        // if (!found)          // after the loop
        //     System.out.println( "not found "); 
        
        
        // int k = 0;
        // while (k < table.length && table[k] != 7)
        // {
        //     k++;
    
        // }
        //   if (k == table.length)
        // {
        //    System.out.println("7 not found ");
        // }
        // else
        // {
        //     System.out.println("7 found at position " + k);
        // }

  private Robot findRobot(String colour)
 {
 for(int i=0;i<robots.length && robots[i]!= null; i++)
  {
    if(robots[i].getColour().equals(colour))
    {
      return robots[i];
	  }
  }
 return null;
 }

      
    }
}
    
    
