import java.util.ArrayList;

class Canteen {
    public String canteenName;
    public ArrayList<String> menu;

    public Canteen(String canteenName, ArrayList<String> menu) {
        this.canteenName = canteenName;
        this.menu = menu;
    }

    public void displayCanteen() {
        System.out.println("Canteen Name: " + canteenName);
        System.out.print("Menu: ");
        for (int i = 0; i < menu.size(); i++) {
            System.out.print(menu.get(i));
            if (i < menu.size() - 1) {
                System.out.print(" , ");
            }
        }
        System.out.println("\n");
    }
}

class University {
    public String name;
    public String location;
    public ArrayList<Canteen> canteens;

    public University(String name, String location) {
        this.name = name;
        this.location = location;
        this.canteens = new ArrayList<>();
    }

    public void addCanteen(Canteen canteen) {
        canteens.add(canteen);
    }

    public void displayUniversity() {
        System.out.println("University Name: " + name);
        System.out.println("Location: " + location);
        System.out.println("\nCanteen in " + name + ":");
        for (int i = 0; i < canteens.size(); i++) {
            canteens.get(i).displayCanteen();
        }
    }
}

public class University_Canteen_Association {
    public static void main(String[] args) {

        ArrayList<String> menu1 = new ArrayList<>();
        menu1.add("Pizza");
        menu1.add("Burger");
        menu1.add("Pasta");

        ArrayList<String> menu2 = new ArrayList<>();
        menu2.add("Salad");
        menu2.add("Fruits");
        menu2.add("Mineral Water");

        Canteen canteen1 = new Canteen("Food Paradise: ", menu1);
        Canteen canteen2 = new Canteen("Healthy Bites: ", menu2);

        University university = new University("ABC University", "New York");
        university.addCanteen(canteen1);
        university.addCanteen(canteen2);

        university.displayUniversity();
    }
}