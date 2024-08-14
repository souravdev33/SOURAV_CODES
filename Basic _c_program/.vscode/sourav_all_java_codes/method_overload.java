public class method_overload {
    int x;
    int y;
    int z;
    void add(int x,int y)
    {
        System.out.println("The sum is : "+(x+y));
    }
    void add(int x,int y,int z)
    {
        System.out.println("The sum is :"+(x+y+z));
    }
    void add()
    {
        System.out.println("Do nothing");
    
    }
    public static void main(String[] args) {
        method_overload obj= new method_overload();

        obj.add(5, 6);
        obj.add(55, 67, 68);
        obj.add();
    }
    
}
