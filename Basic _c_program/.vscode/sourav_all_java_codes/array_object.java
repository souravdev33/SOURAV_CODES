/**
 * array_object
 */
public class array_object {

    String name;
    int id;
    int number;

}

class Test{
    public static void main(String[] args) {
        array_object s1=new array_object();
        s1.name="Rishad";
        s1.id=1002;
        s1.number=696969;
        

        array_object s2=new array_object();
        s2.name="bichi";
        s2.id=10022;
        s2.number=69698569;

        
        array_object s3=new array_object();
        s3.name="conu";
        s3.id=100242;
        s3.number=694569;
    

        array_object student[]=new array_object[3];

        for(int i=0;i<array_object.length;i++)
        {
            System.out.println(array_object[i].name + array_object[i].id);
        }


        

    
        
    }
 

    
}