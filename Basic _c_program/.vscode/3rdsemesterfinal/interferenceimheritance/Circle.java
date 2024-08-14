package interferenceimheritance;

class Circle implements Shape {
    double radius;
    Circle(double radius){
        this.radius=radius;
    }

    public void area(){
        double result=Math.PI*radius*radius;
        System.out.println("The area of the circle is : "+result);
    }

    
}
