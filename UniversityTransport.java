/*
Quesation: A university provides a structured transportation system for student and
staff. The base class, Vehicle, stores general attributes such as
vehicle number, model, and capacity. The bus class extends Vehicle, adding
route and schedule details. The UniversityBus class further extends
Bus to include university specific attributes such as designated stops and
faculty only transport services. This hierarchy follows multilevel
inheritance, where Vehicle defines the commom properties, Bus introduces
public transport specific details, and UnibersityBus object should display
all relevant details, showcasing inhertance and method overriding in JAVA, as
well as the University (main class) having the execution of
inheritance by adding a list of UniversityBus.
*/

class Vehicle {
    public int v_num;
    public String v_model;
    public int c_bus;

    Vehicle(int v_num, String v_model, int c_bus) {
        this.v_num = v_num;
        this.v_model = v_model;
        this.c_bus = c_bus;
    }

    public void display() {
        System.out.println("Vehicle Number: " + v_num + ", Vehicle Model: " + v_model + ", Capacity: " + c_bus);
    }
}

class Bus extends Vehicle {
    String route;
    String schedule;

    Bus(int v_num, String v_model, int c_bus, String route, String schedule) {
        super(v_num, v_model, c_bus);
        this.route = route;
        this.schedule = schedule;
    }

    public void display() {
        super.display();
        System.out.println("Route: " + route);
        System.out.println("Schedule: " + schedule);
    }
}

class UniversityBus extends Bus {
    private String designatedStops;
    private boolean facultyOnly;

    UniversityBus(int v_num, String v_model, int c_bus, String route, String schedule, String designatedStops,
            boolean facultyOnly) {
        super(v_num, v_model, c_bus, route, schedule);
        this.designatedStops = designatedStops;
        this.facultyOnly = facultyOnly;
    }

    @Override
    public void display() {
        System.out.println("\n--- University Bus Details ---");
        super.display();
        System.out.println("Designated Stops: " + designatedStops);
        System.out.println("Faculty Only Transport: " + (facultyOnly ? "Yes" : "No"));
    }
}

public class UniversityTransport {
    public static void main(String[] args) {

        Bus b1 = new Bus(101, "SkyLine", 40, "Route A", "5:15 PM");
        b1.display();
        UniversityBus b2 = new UniversityBus(102, "Metro", 50, "Route B", "6:00 AM", "Main Gate, Library, Admin Block",
                true);
        b2.display();
    }
}