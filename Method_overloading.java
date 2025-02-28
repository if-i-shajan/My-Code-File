class AREA {
    public void calculatearea(double a, double b) {
        System.out.printf("%.2f\n", a * b);

    }

    public void calculatearea(double a, double b, double c) {
        System.out.printf("%.2f\n", a * b * c);

    }

    public void calculatearea(double r) {
        double pi = 3.1416;
        System.out.printf("%.2f\n", pi * r * r);
    }
}

public class Method_overloading {
    public static void main(String[] args) {
        AREA ans = new AREA();
        ans.calculatearea(3.0, 2.2);
        ans.calculatearea(3.0, 3.2, 3.3);
        ans.calculatearea(3.0);
    }
}