package ConstructorOverloading;

public class StudentTest {
    public static void main(String[] args) {
        Student s1=new Student();
        s1.display();
        Student s2=new Student("Sourav","male");
        s2.display();
        Student s3=new Student("Bidhon","male",1027);
        s3.display();
        Student s4=new Student("Rafi","male",1017,69696969);
        s4.display();
    }
    
}
