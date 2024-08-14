package Enummmmmm;


enum Suit{
    Laptop("Black"),
    BMW("White"),
    Heart("REd");
    
    private String colour;
    private Suit(String colour){
        this.colour=colour;
    }
    public String getColour(){
        return colour;
    }
}

public class Sourav {
    public static void main(String[] args) {
        for(Suit suit : Suit.values()){
            System.out.println(suit + " "+suit.getColour());
        }
        
    }
    
}
