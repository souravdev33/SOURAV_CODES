package interferenceinheritence;

class Triangle implements Shape {
    double dim1, dim2;

    Triangle(double dim1, double dim2) {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }

    public void area() {
        double result = 0.5 * dim1 * dim2;
        System.out.println("Triangle area is: " + result);
    }
}
