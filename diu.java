public class diu {

    public String U_name;
    public String U_location;
    public int E_year;
    public String U_owner;

    public diu(String U_name, String U_location, int E_year, String U_owner) {
        this.U_name = U_name;
        this.U_location = U_location;
        this.E_year = E_year;
        this.U_owner = U_owner;
    }

    public void displayInfo() {
        System.out.println(this.U_name + " " + this.U_location);
    }

    public void provideAdmission() {
        System.out.println("Admission is available.");
    }

    public void provideEducation() {
        System.out.println("Education is open for all.");
    }

    public static void main(String args[]) {
        diu ul = new diu("Daffodil", "Savar", 2002, "SK");
        //ul.U_name = "UAP"; 
        ul.displayInfo();
        ul.provideAdmission();
        ul.provideEducation();
    }
}