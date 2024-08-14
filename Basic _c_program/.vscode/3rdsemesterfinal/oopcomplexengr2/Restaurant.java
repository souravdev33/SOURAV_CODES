package oopcomplexengr2;

public class Restaurant {
    private String name;
    private double price;

    public Restaurant(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    @Override
    public String toString() {
        return name + " - $" + price;
    }
}
