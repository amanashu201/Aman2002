class ExceptionTest {
	public static void main(String[] args) {
		int x, a=250, b=85, c = 85;
		int[] age = new int[5];
		
		try {
			
			age[5] = 10;
			
			x = a/(b-c);
		
			System.out.println("x=" + x);
		}
		
		catch(ArrayIndexOutOfBoundsException ex) {
			System.out.println("We ran into array index out of bounds issue!");
		}
		
		catch(ArithmeticException ex) {
			System.out.println("We ran into a divide by zero issue!");
		}
		
		catch(Exception ex) {
			System.out.println("We ran into a general issue!");
			System.out.println("Exception details: " + ex.toString());
		}
		
		System.out.println("Aal is well!.");
	}
}