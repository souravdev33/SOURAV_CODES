package Oopct;

public class Square extends Rectangle{
    
    public Square(String name, double side)
    {
        super(name,side,side);
    }

    @Override
    public void draw() 
    {
        System.out.println("Drawing a square with side " + width);
    }
}
