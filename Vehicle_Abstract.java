abstract class Vehicle {
    public String name;
    public String color;

    public Vehicle(String name, String color) {
        this.name = name;
        this.color = color;
    }

    abstract public void start();

    public void display() {
        System.out.println("Name: " + name + " | Color: " + color);
    }
}

class Car extends Vehicle {
    public String brandName;

    public Car(String name, String color, String brandName) {
        super(name, color);
        this.brandName = brandName;
    }

    @Override
    public void start() {
        System.out.println("Car is starting...");
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Brand Name: " + brandName);
    }
}

public class Vehicle_Abstract {
    public static void main(String[] args) {
        Car myCar = new Car("Sedan", "Red", "Toyota");
        myCar.display();
        myCar.start();
    }
}