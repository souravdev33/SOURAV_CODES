package Oopct;

public class Rectangle extends Polygon {
    protected double width,height;

    public Rectangle(String name, double width, double height)
    {
        super(name);
        this.width = width;
        this.height = height;
    }

    @Override
    public void draw()
    {
        System.out.println("Drawing a rectangle with width " + width + " and height " + height);
    }

}
