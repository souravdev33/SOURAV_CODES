package Oopct;

public class Triangle extends Polygon {
    protected double side1, side2, side3;

    public Triangle(String name, double side1, double side2, double side3) 
    {
        super(name);
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    @Override
    public void draw() 
    {
        System.out.println("Drawing a triangle with sides " + side1 +"," + side2+ "," + side3);
    }

}
