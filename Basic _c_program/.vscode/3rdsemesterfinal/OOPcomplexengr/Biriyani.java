package OOPcomplexengr;


public class Biriyani extends Restaurant {
    private String type;

    public Biriyani(String name, double price, String type) {
        super(name, price);
        this.type = type;
    }

    public String getType() {
        return type;
    }

    @Override
    public String toString() {
        return super.getName() + " (" + type + ") - $" + getPrice();
    }
}
