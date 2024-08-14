package OOPcomplexengr;



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
        orderedBiriyanis.add(biriyani);
        System.out.println(name + " ordered: " + biriyani.getName());
        System.out.println("\n");
    }
}
