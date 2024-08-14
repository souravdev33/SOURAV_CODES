package superkeyword;

public class Vehicle {
    String name;
    String colour;
    double weight;

    Vehicle(String name,String colour,double weight){
        this.name=name;
        this.colour=colour;
        this.weight=weight;
    }
    void display(){
        System.out.println("The name of the car is : "+name);
        System.out.println("The colour of the car is : "+colour);
        System.out.println("The weight of the car is : "+weight);
    }
    
    
}
