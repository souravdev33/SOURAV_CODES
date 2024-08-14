package OOPcomplexengr;



import java.util.ArrayList;
import java.util.List;

public class KacchiDine {
    private List<Biriyani> menu;
    private List<Customer> customers;

    public KacchiDine() {
        menu = new ArrayList<>();
        customers = new ArrayList<>();
    }

    public void addBiriyani(Biriyani biriyani) {
        menu.add(biriyani);
    }

    public void addCustomer(Customer customer) {
        customers.add(customer);
    }

    public void displayMenu() {
        System.out.println("Menu:");
        for (Biriyani biriyani : menu) {
            System.out.println(biriyani);
        }
        System.out.println("\n");
    }

    public void serveBiriyani(String biriyaniName, String customerName) {
        for (Biriyani biriyani : menu) {
            if (biriyani.getName().equals(biriyaniName)) {
                for (Customer customer : customers) {
                    if (customer.getName().equals(customerName)) {
                        customer.orderBiriyani(biriyani);
                        break;
                    }
                }
                break;
            }
        }
    }

    public void displayCustomerOrders(String customerName) {
        for (Customer customer : customers) {
            if (customer.getName().equals(customerName)) {
                System.out.println("Orders for " + customerName + ":");
                for (Biriyani biriyani : customer.getOrderedBiriyanis()) {
                    System.out.println(biriyani);
                }
                System.out.println("\n");
                break;
            }
        }
    }
}
