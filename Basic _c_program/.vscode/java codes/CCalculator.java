import java.util.Scanner;

public class CCalculator {

    private int numberOne, numberTwo;

    public CCalculator(int numberOne, int numberTwo) {
        this.numberOne = numberOne;
        this.numberTwo = numberTwo;
    }

    public void add() {
        System.out.println("Sum: " + (numberOne + numberTwo));
    }

    public static class TestCalculator
     {
        CCalculator calc1,calc2;

        public TestCalculator() {
            Scanner in = new Scanner(System.in);

            int num1 = in.nextInt();

            int num2 = in.nextInt();

            calc1 = new CCalculator(num1, num2);

            int num3 = in.nextInt();
            
            int num4 = in.nextInt();

            calc2 = new CCalculator(num3, num4);
        }
    }

    public static void main(String[] args) {
        CCalculator.TestCalculator testCalculator = new CCalculator.TestCalculator();

        testCalculator.calc1.add();
        testCalculator.calc2.add();
    }

}
