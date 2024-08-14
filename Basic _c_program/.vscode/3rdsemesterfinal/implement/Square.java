package implement;

public class Square extends Rectngle {

    Square(double lenth){
        super(lenth, lenth);
    }
    public void area(){
        double result=length*length;
        System.out.println("ARea of Square is : "+result);
    }
    public void perimeter(){
        double result=4*length;
        System.out.println("Perimeter of Square is : "+result);
    }
    
}
