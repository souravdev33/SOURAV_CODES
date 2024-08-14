class sourav{
    void add(int ... num){
        int sum=0;
        for(int x : num)
        {
            sum+=x;
        }
      System.out.println("The sum is : "+sum);
    }
}
public class multivariablelength {
    public static void main(String[] args) {
        sourav obj= new sourav();
        obj.add(10,20,30,40);
        obj.add(10,20,30,40,50,60,70,80,90,100);
        
    }
    
}
