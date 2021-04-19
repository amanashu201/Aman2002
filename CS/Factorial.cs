using System;

class Factorial
{
	public static void Main()
	{
		int n, f=1;
		
		Console.Write("Enter a number: ");
		n = Convert.ToInt32(Console.ReadLine());
		
		for(int i=n; i>=1; i--)
		{
			f = f * i;
		}
		
		Console.WriteLine("The factorial of {0} is {1}.", n, f);
	}
}

/*
	OOP
*/