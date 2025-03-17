class A{
	void show(){
	System.out.println("Inside A");
	}
}

class B extends A{
	@Override
	void show(){
	System.out.println("Inside B");
	}
}

class C extends A{
	@Override
	void show(){
	System.out.println("Inside C");
	}
}

class D extends B,C{ //This line has an error
	@Override 
	void show(){
	super.show();
	System.out.println("Inside D");
	}
}

public class DiamondProblem{
	public static void main(String args[]){
	D d1 = new D();
	d1.show();
	}
}