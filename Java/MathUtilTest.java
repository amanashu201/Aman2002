import java.util.Scanner;
class MathUtilTest {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int n = scan.nextInt();
		MathUtil m = new MathUtil();
		System.out.println("The factorial of " + n + " is " + m.factorial(n) +".");
		System.out.println("The square of " + n + " is " + m.square(n) +".");
	}
}