package interferenceimheritance;

public class Test {
    public static void main(String[] args) {
        Shape r=new Rectangle(10, 20);
        r.area();
        Shape c=new Circle(10);
        c.area();
    }
    
}
