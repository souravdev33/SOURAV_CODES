package superkeyword;

public class Car extends Vehicle{
    // name,colour,weight ekhane ekhon sob chole eseche
    int gear;

    Car(String name,String colour,double weight,int gear){
        super(name,colour,weight);
        this.gear=gear;
    }

    void display(){
        super.display();
        System.out.println("The gear of the car is : "+gear);           
    }
    
}
