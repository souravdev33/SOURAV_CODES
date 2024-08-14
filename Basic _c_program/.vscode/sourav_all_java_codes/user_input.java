
import java.util.Scanner;

public class user_input {

public static void main(String[] args) {
    int number1;
    int number2;
    Scanner in=new Scanner(System.in);
    System.out.print("Enter the number 1 : ");
    number1=in.nextInt();
    System.out.print("Enter the number 2 : ");
    number2=in.nextInt();
    System.out.println("The sum is : "+(number1+number2));
    System.out.println("\n\n");

    int max=Math.max(number1,number2);
    System.out.println("The maximum is : "+max);




    
}




    
}
