class A				//super class
{
	private int a;
	
	A()
	{
		a=10;
	}
	A(int x)
	{
		a = x;
	}
	
	void display_a()
	{
		System.out.println("a=" + a);
	}
}

class B extends A			//sub class
{
	private int b;
	
	B()
	{
		b=20;
	}
	B(int x)
	{
		b = x;
	}
	
	void display_b()
	{
		System.out.println("b=" + b);
	}
}

class InheritanceDemo
{
	public static void main(String args[])
	{
		B obB = new B();
	
		obB.display_a();
		obB.display_b();
	
	}
}