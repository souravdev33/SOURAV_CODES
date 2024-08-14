public class exception {
    public static void main(String[] args) {
        try{
            int x=1;
            int y=0;
            int result=x/y;
            System.out.println(result);
        }
        catch(ArithmeticException e)
        {
            System.out.println("EXception occurs for : "+e);
        }
        
    }
  

    
}
