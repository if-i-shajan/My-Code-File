interface Vehicle {
    void changingGear(int gear);

    void increasingSpeed(double increment);

    void applyingBrakes(double decrement);
}

class Bicycle implements Vehicle {
    private double speed = 0;
    private int gear = 1;

    @Override
    public void changingGear(int newGear) {
        this.gear = newGear;
        System.out.println("Bicycle gear changed to: " + gear);
    }

    @Override
    public void increasingSpeed(double increment) {
        speed += increment;
        System.out.println("Bicycle speed increased to: " + speed);
    }

    @Override
    public void applyingBrakes(double decrement) {
        speed -= decrement;
        if (speed < 0)
            speed = 0;
        System.out.println("Bicycle speed decreased to: " + speed);
    }
}

class Bike implements Vehicle {
    private double speed = 0;
    private int gear = 1;

    @Override
    public void changingGear(int newGear) {
        this.gear = newGear;
        System.out.println("Bike gear changed to: " + gear);
    }

    @Override
    public void increasingSpeed(double increment) {
        speed += increment;
        System.out.println("Bike speed increased to: " + speed);
    }

    @Override
    public void applyingBrakes(double decrement) {
        speed -= decrement;
        if (speed < 0)
            speed = 0;
        System.out.println("Bike speed decreased to: " + speed);
    }
}

public class InterfaceVehicle {
    public static void main(String[] args) {
        Bicycle myBicycle = new Bicycle();
        myBicycle.changingGear(3);
        myBicycle.increasingSpeed(10);
        myBicycle.applyingBrakes(4);
        Bike myBike = new Bike();
        myBike.changingGear(2);
        myBike.increasingSpeed(20);
        myBike.applyingBrakes(5);
        System.out.println();
    }
}