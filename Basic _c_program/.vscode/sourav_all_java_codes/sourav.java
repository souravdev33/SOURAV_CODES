public class sourav {
    String name;
    int age;
    int number;

    sourav(String name,int age,int number){
        this.name=name;
        this.age=age;
        this.number=number;

    }
    void display(){
        System.out.println("The name is : "+name);
        System.out.println("The age is : "+age);
        System.out.println("The number is : "+number);
    }

    public static void main(String[] args) {
        sourav obj=new sourav("Sourav", 22, 1571151);
        obj.display();



    }
}
