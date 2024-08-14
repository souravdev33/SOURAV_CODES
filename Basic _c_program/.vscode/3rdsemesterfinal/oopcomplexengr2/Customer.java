package oopcomplexengr2;

import java.util.ArrayList;
import java.util.List;

public class Customer {
    private String name;
    private List<Biriyani> orderedBiriyanis;

    public Customer(String name) {
        this.name = name;
        this.orderedBiriyanis = new ArrayList<>();
    }

    public String getName() {
        return name;
    }

    public List<Biriyani> getOrderedBiriyanis() {
        return orderedBiriyanis;
    }

    public void orderBiriyani(Biriyani biriyani) {
        if (biriyani.isAvailable()) {
            orderedBiriyanis.add(biriyani);
            biriyani.setAvailable(false);
            System.out.println(name + " ordered: " + biriyani);
        } else {
            System.out.println(name + ", sorry, " + biriyani.getName() + " is not available.");
        }
        System.out.println("\n");
    }
}
