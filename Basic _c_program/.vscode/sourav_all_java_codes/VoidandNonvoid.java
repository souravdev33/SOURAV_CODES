public class VoidandNonvoid {
    
    void add(){
        int a=10;
        int b=10;
        int sum=0;
        sum=a+b;
        System.out.println("The sum is : "+sum);
    }
    int add1(){
        int a=10;
        int b=10;
        int sum=0;
        sum=a+b;
        System.out.println("The sum is : "+sum);
        return sum;

    }

    public static void main(String[] args) {
        VoidandNonvoid obj=new VoidandNonvoid();
        obj.add1();
    }
}
