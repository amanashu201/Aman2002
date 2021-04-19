import java.util.Scanner;
class Factorial {
	public static void main(String[] args) {
		int n, f=1;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number: ");
		n = scan.nextInt();
		for(int i=n; i>=1; i--) {
			f = f * i;
		}
		System.out.println("The factorial of " + n + " is " + f + ".");
	}
}