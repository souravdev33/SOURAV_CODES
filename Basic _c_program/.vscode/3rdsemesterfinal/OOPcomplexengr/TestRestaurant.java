package OOPcomplexengr;

public class TestRestaurant {
    public static void main(String[] args) {
        KacchiDine biriyaniShop = new KacchiDine();

        biriyaniShop.addBiriyani(new Biriyani("Chicken biriyani", 150, "Chicken Biriyani"));
        biriyaniShop.addBiriyani(new Biriyani("Mutton biriyani", 320, "Mutton Biriyani"));
        biriyaniShop.addBiriyani(new Biriyani("Spicy Chicken biriyani", 210, "Chicken Biriyani"));
        biriyaniShop.addBiriyani(new Biriyani("Special Mutton biriyani", 450, "Mutton Biriyani"));

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

