
import java.util.Scanner;

public class Area{

    int x, y, r;

    // Default constructor
    public Area() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the radius (r): ");
        this.r = scanner.nextInt();
    }

    // Parameterized constructor with x and y parameters
    public Area(int x, int y) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the value for x: ");
        this.x = scanner.nextInt();

        System.out.println("Enter the value for y: ");
        this.y = scanner.nextInt();
    }