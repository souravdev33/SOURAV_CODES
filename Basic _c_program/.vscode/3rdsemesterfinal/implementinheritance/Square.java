package implementinheritance;

public class Square extends Rectangle{
    
    
    Square(double length){
        super(length,length);
    }

    public void area(){
        double result=length*length;
        System.out.println("The area of the square is :"+result);
    }

    public void perimeter(){
        double result=4*length;
        System.out.println("The perimeter of the square is : "+result);
    }
}
