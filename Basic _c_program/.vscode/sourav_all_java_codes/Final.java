public class Final {
    void number()
    {
        System.out.println("01571151411");
    }
    void atmpin()
    {
        System.out.println("2049");
    }
}

class sourav extends Final{

    //Here this class is overriding the final class
    void number(){
            System.out.println("01571151411");
    }
    void atmpin(){
            System.out.println("2049");
    } 
   }


 class test{

   
   public static void main(String[] args) {
    sourav obj=new sourav();
    obj.number(); obj.atmpin();
   }
}

