import java.util.Scanner;

public class practice {
  public static void main(String[] args) {
Scanner in=new Scanner(System.in);
//   int counter = 0;
//   while (counter < 10)
//   {            
//      System.out.println("Counter: "+counter);
//       counter++;   // adds 1 to counter
//   }
// int k=50;
// int total=0;

// do	
// { 
    
// 	total = total + k;
// 	System.out.println("Total = " + total);
//     k++;
// }
// while (k<10);

// for (int i=0; i < 10; i++) // 10 times
// 	{
//   for (int j=0; j < 10; j++) //10 times   
// 	{
// 			System.out.println("Hi");
// 	}
// 	}
// int k;
// for (k=0; k<1000;k++)
// {
//    System.out.println(""+k);
//    if( k == 7 ) 
//         break;
// }
// System.out.println(""+k);
int x;
x=in.nextInt();
switch(x)
{ 
		case 5:
		case 6:
		case 7:
        case 8:	System.out.println("five to eight");
			break;
		case 9:
		case 10:
		case 11:
		case 12: System.out.println ("nine to twelve");
        break;
        default: System.out.println ("larger than twelve");
}










    
  }  
   

}
