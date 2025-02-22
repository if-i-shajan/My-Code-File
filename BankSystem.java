class BankAccount {
    public String accountNumber;
    public String accountHoldername;
    public double Balance;

    BankAccount(String accountNumber, String accountHolderName, double Balance) {
        this.accountNumber = accountNumber;
        this.accountHoldername = accountHolderName;
        this.Balance = Balance;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            Balance += amount;
        }
    }

    public void witdraw(double amount) {
        if (amount > 0 && amount <= Balance) {
            Balance -= amount;
        }
    }

    public void display() {
        System.out.println("Your Balance: " + Balance);
    }
}

class SavingAccount extends BankAccount {
    double interestrate;

    SavingAccount(String accountNumber, String accountHolderName, double Balance, double interestrate) {

        super(accountNumber, accountHolderName, Balance);
        this.interestrate = interestrate;
    }

    public void addInterest() {
        double interestrate = (Balance * this.interestrate) / 100;
        Balance += interestrate;
    }

    public void display() {
        super.display();
        System.out.println("Interest Rate: " + interestrate);
    }
}

public class BankSystem {
    public static void main(String args[]) {
        SavingAccount s1 = new SavingAccount("1101", "Shajan", 100.0, 5.1);
        s1.display();
        s1.deposit(50.0);
        s1.addInterest();
        s1.display();
    }
}