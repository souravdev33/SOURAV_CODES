public class Student_static {   //this code is for static
    
    String name;
    int id;
    static String University="Premier UNiversity";


    Student_static(String n,int i){
        name=n;
        id=i;
    }

    void display()
    {
        System.out.println("The name is : "+name);
        System.out.println("The id is : "+id);
        System.out.println("The university is :"+University);
        System.out.println("\n");
    }

    public static void main(String[] args) {
        Student_static s1=new Student_static("Sourav", 1033);
        Student_static s2=new Student_static("BIdhan", 1027);

        s1.display();
        s2.display();
    }
}
