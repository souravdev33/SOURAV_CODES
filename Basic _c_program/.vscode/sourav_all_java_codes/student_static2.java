public class student_static2 {

    
   static int count=0;

   static{
    count=10;
   }
    

  
    student_static2()
    {
        count++;//count=2;
    }



    void display()
    {
        System.out.println("The total student is : "+count);
        // display1();
        
    }
    static void display1()
    {
        System.out.println("i AM BIDHON");
       
        // display();
    }


    public static void main(String[] args) {
   
        // student_static2 s1=new student_static2();
        student_static2.display1();
      
        student_static2 s2=new student_static2();
        s2.display();

        student_static2 s3=new student_static2();
        s3.display();
        System.out.println(student_static2.count);
    }


        
        
    }

