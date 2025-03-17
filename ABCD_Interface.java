interface A{
	void show();
}
interface B extends A{
	default void show(){
		System.out.println("B's details");
	}
}
interface C extends A{
	default void show(){
		System.out.println("C's details");
	}
}
class D implements B,C{
	public void show(){
	B.super.show();
	System.out.println("Here is also A's details with B's deatils");
	}
}
public class ABCD_Interface{
	public static void main(String[] args){
	D d1 = new D();
	d1.show();
	}
}