package interferenceinheritence;

class Test {
    public static void main(String[] args) {
      
        Shape Rectangle = new Rectangle(10, 20);
        Rectangle.area();
        Shape Triangle = new Triangle(10, 20);
        Triangle.area();
        Shape Circle = new Circle(10);
        Circle.area();
    }
}