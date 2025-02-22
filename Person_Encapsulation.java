class person {
    private String name;
    private int age;

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }
}

public class Person_Encapsulation {
    public static void main(String[] args) {
        person p1 = new person();
        p1.setName("abc");
        p1.getName();
        p1.setAge(30);
        p1.getAge();
        System.out.println(p1.getName() + " " + p1.getAge());
    }
}