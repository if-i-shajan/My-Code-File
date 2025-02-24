//java inheritance
class Employee {
    public String name;
    public int id;
    public double salary;
    public String department;

    Employee(String name, int id, double salary, String department) {
        this.name = name;
        this.id = id;
        this.salary = salary;
        this.department = department;
    }

    public void display() {
        System.out.println(name + " " + id + " " + salary);
    }
}

class Programmer extends Employee {
    public String pKnowledge;

    Programmer(String name, int id, double salary, String department, String pKnowledge) {
        super(name, id, salary, department);
        this.pKnowledge = pKnowledge;
    }

    @Override
    public void display() {
        super.display();
        System.out.println(pKnowledge);
    }
}

class SeniorProgrammer extends Programmer {
    public String experience;

    SeniorProgrammer(String name, int id, double salary, String department, String experience) {
        super(name, id, salary, department, "Advanced Programming");
        this.experience = experience;
    }

    @Override
    public void display() {
        super.display();
        System.out.println(experience);
    }
}

public class Employee_Inheritance {
    public static void main(String[] args) {
        Programmer p1 = new Programmer("Joss", 101, 500.50, "CSE", "C++");
        SeniorProgrammer p2 = new SeniorProgrammer("Steve", 102, 10000.10, "CSE", "python");
        p1.display();
        p2.display();
    }
}
