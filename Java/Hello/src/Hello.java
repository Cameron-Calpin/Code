

// class - Contains everything - has members
// methods - do something
// arguments - what you pass to a method
// parameter - 
// statements - Telling the computer something
// properties - store something

// access modifier (public) - Who can use?
// static - No instance of class is needed
// object - instance of a class

public class Hello {

	public static void main(String[] args) { // methods
		System.out.println("Hello " + args[0]);
		
		var x = new Hello(); // creating an object
		String result = x.tacos();
		System.out.println(result);
	}
	
	String x = new String("hello"); // property
	
	public static String tacos() { // methods
		System.out.println("Hello there tacos!");
		return "yah yeet";

	}

}
