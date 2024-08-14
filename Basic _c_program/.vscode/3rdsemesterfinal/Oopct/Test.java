package Oopct;

public class Test {
    public static void main(String[] args) 
    {
        Polygon circle = new Circle("Circle", 15);
        Polygon triangle = new Triangle("Triangle", 10, 20, 30);
        Polygon rectangle = new Rectangle("Rectangle", 10, 5);
        Polygon square = new Square("Square", 40);
    
        // Call the draw() method on each object
        circle.draw();
        triangle.draw();
        rectangle.draw();
        square.draw();
    }
}
