public class Car {
    String make;
    String model;
    int year;
    double price;

   // Constructor with all attributes
   public Car(String make, String model, int year, double price) {
       this.make = make;
       this.model = model;
       this.year = year;
       this.price = price;
   }

   // Constructor without price
   public Car(String make, String model, int year) {
       this(make, model, year, 0.0); // Default price is set to 0.0
   }

   // Constructor without year and price
   public Car(String make, String model) {
       this(make, model, 0, 0.0); // Default year is set to 0, default price is 0.0
   }

   // Constructor with only make
   public Car(String make) {
       this(make, "", 0, 0.0); // Default model is an empty string, default year is 0, default price is 0.0
   }

   public void displayCarDetails() {
       System.out.println("Make: " + make);
       System.out.println("Model: " + model);
       System.out.println("Year: " + year);
       System.out.println("Price: $" + price);
       System.out.println();
   }

   public static void main(String[] args) {
       // Creating Car objects using different constructors
       Car car1 = new Car("Toyota", "Camry", 2022, 25000.0);
       Car car2 = new Car("Honda", "Civic");

       // Displaying the details of the Car objects
       System.out.println("Car 1 Details:");
       car1.displayCarDetails();

       System.out.println("Car 2 Details:");
       car2.displayCarDetails();
   }
}