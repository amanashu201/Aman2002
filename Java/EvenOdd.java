import java.util.*;

class EvenOdd{
	public static void main(String[] args){
		
		int num;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter a number:");
		num = scan.nextInt();
		
		if(num%2==0)
			System.out.println("even number");
		else
			System.out.println("odd number");
	}
}
	