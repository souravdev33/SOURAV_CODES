import java.util.ArrayList;
import java.util.*;

public class Forloop {

  
    public static void main(String[] args) {
        ArrayList<String>fruit= new ArrayList<>();
        fruit.add("Apple");
        fruit.add("Banana");
        fruit.add("Orange");

        Iterator<String>it= fruit.iterator();

        // while(it.hasNext()){
        //     System.out.println(it.next());
        // }
            
        for(String ruit: fruit)
        {
            System.out.println(ruit);
        }
        
    }
    
}
