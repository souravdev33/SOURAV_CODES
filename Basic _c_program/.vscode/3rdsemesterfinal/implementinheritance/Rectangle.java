package implementinheritance;

public class Rectangle {
   protected double length,width;

   Rectangle(double length,double width){
    this.length=length;
    this.width=width;
   }
  
   public void area(){
    double result=length*width;
    System.out.println("The rectangle area is : "+result);
   }
   public void perimeter(){
    double result=2*(length+width);
    System.out.println("The perimeter of the rectangle is : "+result);
   }
}
