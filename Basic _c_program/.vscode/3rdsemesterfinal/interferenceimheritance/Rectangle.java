package interferenceimheritance;

public class Rectangle implements Shape {
    double dim1,dim2;
    Rectangle(double dim1, double dim2){
        this.dim1=dim1;
        this.dim2=dim2;
    }
    public void area(){
        double result=dim1*dim2;
        System.out.println("area of rectangle : "+result);
    }
    
    
}
