interface Animal {
	void makeSound();

	void eat();

	void move();
}

class Dog implements Animal {
	@Override
	public void makeSound() {
		System.out.println("Dog is barking");
	}

	@Override
	public void eat() {
		System.out.println("Dog eats meat");
	}

	@Override
	public void move() {
		System.out.println("Dog moves by walking and running");
	}
}

public class InterfaceExecution {
	public static void main(String args[]) {
		Dog d1 = new Dog();
		d1.makeSound();
		d1.eat();
		d1.move();
	}
}