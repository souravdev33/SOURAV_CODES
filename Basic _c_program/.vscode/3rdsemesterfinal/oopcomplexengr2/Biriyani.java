package oopcomplexengr2;

public class Biriyani extends Restaurant {
    private String type;
    private boolean available;

    public Biriyani(String name, double price, String type) {
        super(name, price);
        this.type = type;
        this.available = true;
    }

    public String getType() {
        return type;
    }

    public boolean isAvailable() {
        return available;
    }

    public void setAvailable(boolean available) {
        this.available = available;
    }

    @Override
    public String toString() {
        return super.getName() + " (" + type + ") - $" + getPrice() + " - " + (available ? "Available" : "Out of Stock");
    }
}
