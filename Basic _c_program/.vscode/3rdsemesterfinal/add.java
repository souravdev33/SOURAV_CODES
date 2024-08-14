import Encapsulation.Sourav;

class Sourav{
    int x,y;
    public String section;
    public int id;
    public String name;

    int add(int x,int y){
        return x+y;
    }

    public void displayinfo() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'displayinfo'");
    }

    public void setName(String string) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'setName'");
    }

    public String getName() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'getName'");
    }

    public void setID(int i) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'setID'");
    }

    public char[] getID() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'getID'");
    }
}

public class add {
    public static void main(String[] args) {
        Sourav obj=new Sourav();
       int res= obj.add(2, 50);
       System.out.println("The result is : "+res);
    }
    
}
