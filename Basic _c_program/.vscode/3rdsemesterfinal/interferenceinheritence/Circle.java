package interferenceinheritence;

class Circle implements Shape {
    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    public void area() {
        double result = Math.PI * radius * radius;
        System.out.println("Circle area is: " + result);
    }
}