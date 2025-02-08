import java.util.ArrayList;

public class arrayList {
    public static void main(String args[]) {
        ArrayList<Integer> age = new ArrayList<>();
        age.add(12);
        age.add(13);
        age.add(14);
        age.add(15);
        System.out.println("The age array after adding values" + age);
        System.out.println("The length or size of the age list:" + age.size());
        System.out.println("The third element of the age list:" + age.get(2));
        age.remove(2);
        System.out.println("The age array after removing 14 value" + age);

    }
}
