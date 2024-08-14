public class mulpitle_class {
    private Australian ausRick;
    private Australian ausTim;
    private French freFleur;
    private Italian itaGianni;

    mulpitle_class() {
        // Constructor for the main class, if needed
    }

    public static void main(String[] args) {
        // Creating an instance of MultipleClass to access its non-static members
        mulpitle_class multipleClassInstance = new mulpitle_class();

        // Creating instances of Australian, French, and Italian classes
        multipleClassInstance.ausRick = new Australian(111, "English", "Rick");
        multipleClassInstance.ausTim = new Australian(112, "English", "Tim");
        multipleClassInstance.freFleur = new French(113, "French", "Fleur");
        multipleClassInstance.itaGianni = new Italian(114, "Italian", "Gianni");

        // You can access the instances and their properties as needed
        System.out.println("Name of ausRick: " + multipleClassInstance.ausRick.name);
    }
}

class Australian {
    int id;
    String language;
    String name;

    public Australian(int theId, String theLanguage, String theName) {
        id = theId;
        language = theLanguage;
        name = theName;
    }
}

class French {
    // Similar structure for French class
}

class Italian {
    // Similar structure for Italian class
}
