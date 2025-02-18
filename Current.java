import java.util.Scanner;

public class Current {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number;
        System.out.println("Enter ant number: ");
        number = input.nextInt();
        System.out.println("Number= " + number);
        input.close();
    }
}