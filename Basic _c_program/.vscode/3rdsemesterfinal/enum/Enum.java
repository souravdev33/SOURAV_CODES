enum Suit {
    DIAMONDS("Red"),
    CLUBS("Black"),
    HEARTS("Red"),
    SPADES("Black");

    private final String colour;

    private Suit(String colour) {
        this.colour = colour;
    }

    public String getColour() {
        return colour;
    }
}

public class Enum {
    public static void main(String[] args) {
        for (Suit suit : Suit.values()) {
            System.out.println(suit + " " + suit.getColour());
        }
    }
}
