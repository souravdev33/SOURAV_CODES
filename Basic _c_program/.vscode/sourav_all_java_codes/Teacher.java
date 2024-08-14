
public class Teacher {

    String name;
    String gender;
    int age;

    void setinformation(String n,String g,int a)
    {
        this.name=n;
        this.gender=g;
        this.age=a;

    }

    void displayinformation(){
        System.out.println("The name is : "+name);
        System.out.println("The gender is : "+gender);
        System.out.println("The age is : "+age);
    }

    public static void main(String[] args) {
        Teacher teacher1=new Teacher();
        Teacher teacher2=new Teacher();
        teacher1.setinformation("Sourav", "male", 23);
        teacher2.setinformation("Tanmoy", "male", 24);
        teacher1.displayinformation();
        teacher2.displayinformation();
        
    }

    
}
