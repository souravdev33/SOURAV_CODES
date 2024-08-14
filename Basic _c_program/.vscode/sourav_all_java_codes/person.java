public class person {   //this code is for java encapsulation

    String name;

    //setter
    public void setname(String name)
    {
        this.name=name;

    }

    //getter
    public String getname()
    {
        return name;
    }
    public static void main(String[] args) {
        person obj=new person();
        obj.setname("Sourav");
        System.out.println("Name is : "+obj.getname());
    }

    
}
