package Exceptionhandling;

public class Exceptiondemo {

    public static void main(String[] args) {
        try{
            int x=10;
            int y=0;
            int result=x/y;
            System.out.println("The result is : "+result);
        }
        catch(ArithmeticException e1){
            System.out.println("Expresion : "+e1);
        }
        finally{
            System.out.println("End of this program");
        }
    }
    
}
