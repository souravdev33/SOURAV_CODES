public class Casting {
    public static void main(String[] args) {
        int numerator = 10;
        int denominator = 3;

        // Integer division
        int resultInteger = numerator / denominator;
        System.out.println("Integer division result: " + resultInteger); // Output: 3

        // Floating-point division (casting one or both operands to double)
        double resultDouble = (double) numerator / denominator;
        System.out.println("Floating-point division result: " + resultDouble); // Output: 3.3333333333333335
    }
}
