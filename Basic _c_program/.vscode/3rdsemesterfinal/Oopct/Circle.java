package Oopct;

public class Circle extends Polygon{
    protected double radius;

    public Circle(String name, double radius) 
    {
        super(name);
        this.radius = radius;
    }

    @Override
    public void draw() 
    {
        System.out.println("Drawing a circle with radius " + radius);
    }
    }


