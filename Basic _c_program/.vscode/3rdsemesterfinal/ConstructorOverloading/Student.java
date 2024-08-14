package ConstructorOverloading;

public class Student {
    String name,gender;
    int id,phone;

    Student(){
        System.out.println("Nothing to show");
    }
    Student(String name,String gender){
        this.name=name;
        this.gender=gender;
    }    
    Student(String name,String gender,int id){
        this.name=name;
        this.gender=gender;
        this.id=id;
    }
    Student(String name,String gender,int id,int phone){
        this.name=name;
        this.gender=gender;
        this.id=id;
        this.phone=phone;

    }
    void display(){
        System.out.println("Name is : "+name);
        System.out.println("Gender is : "+gender);
        System.out.println("Id is : "+id);
        System.out.println("Phone is : "+phone);
    }
}
