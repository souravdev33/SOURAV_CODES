import java.util.*;

public class userinput {
    public static void main(String[] args) {
        int number;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a new number: ");
        number = input.nextInt();
        System.out.println("The number is: " + number);

        // Close the Scanner to prevent resource leak
        input.close();
    }
}
