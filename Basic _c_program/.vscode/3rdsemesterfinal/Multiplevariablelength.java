class sourav{
    
    void add(int ... num){
        int sum=0;
       
        for(int x : num){
            sum=sum+x;
        }
        System.out.println("Thw sum is : "+sum);
    }
}
public class Multiplevariablelength {
    public static void main(String[] args) {
        sourav obj=new sourav();
        obj.add(10,20,30);
        obj.add(30,43,54,34,34,34);
        
    }
}
