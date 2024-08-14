import java.util.*;

import javax.print.DocFlavor.STRING;

public class Arraylist {
    public static void main(String[] args) {
        
        LinkedList<String>food=new LinkedList<String>();
        food.add("Pizza");
        food.add("Burgir");
        food.add("Kola");

      
       Iterator<String> it=food.iterator();

       while(it.hasNext()){
        System.out.println(it.next());
       }

    }
    
}
