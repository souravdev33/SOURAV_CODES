public class TeacherC {      //This code is for constructor
String name;
String gender;
int age;

TeacherC(String name,String gender,int age){
    this.name=name;
    this.gender=gender;
    this.age=age;
}

void displayinformation(){
    System.out.println("The name is :"+name);
    System.out.println("The gender is : "+gender);
    System.out.println("The age is : "+age);
}

public static void main(String[] args) {
    TeacherC teacher1=new TeacherC("Sourav", "Male", 23);
    teacher1.displayinformation();   
}



}


