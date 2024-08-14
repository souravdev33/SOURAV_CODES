package Oopct;

public class Polygon {
    protected String name;
    Polygon(String name)
    {
        this.name=name;
    }
   
    public void draw() 
    {
        System.out.println("Drawing a " + name);
    }

}
