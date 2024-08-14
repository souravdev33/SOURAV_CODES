package implement;

public class Rectngle {
    double length,width;
    Rectngle(double length,double width){
        this.length=length;
        this.width=width;

    }
    public void area(){
        double result=length*width;
        System.out.println("ARea of ractangle is : "+result);
    }
    public void perimeter(){
        double result=2*(length+width);
        System.out.println(" of ractangle is : "+result);
    }

    
}
