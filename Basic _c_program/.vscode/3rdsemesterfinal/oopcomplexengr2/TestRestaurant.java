package oopcomplexengr2;

public class TestRestaurant {
    public static void main(String[] args) {
        KacchiDine biriyaniShop = new KacchiDine();

        biriyaniShop.addBiriyani(new ChickenBiriyani("Chicken biriyani", 150));
        biriyaniShop.addBiriyani(new MuttonBiriyani("Mutton biriyani", 320));
        biriyaniShop.addBiriyani(new ChickenBiriyani("Spicy Chicken biriyani", 210));
        biriyaniShop.addBiriyani(new MuttonBiriyani("Special Mutton biriyani", 450));

        biriyaniShop.addCustomer(new Customer("Sourav"));
        biriyaniShop.addCustomer(new Customer("Tanmoy"));
        biriyaniShop.addCustomer(new Customer("Bidhan"));


        biriyaniShop.displayMenu();

        biriyaniShop.serveBiriyani("Chicken biriyani", "Sourav");
        biriyaniShop.serveBiriyani("Special Mutton biriyani", "Tanmoy");
        biriyaniShop.serveBiriyani("Spicy Chicken biriyani", "Bidhan");
        

        biriyaniShop.displayCustomerOrders("Sourav");
        biriyaniShop.displayCustomerOrders("Tanmoy");
        biriyaniShop.displayCustomerOrders("Bidhan");
    }
}
