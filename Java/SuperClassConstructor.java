class AccessSpecifier
{
private int a;
	
protected int b;

	int c;	
	AccessSpecifier()
	{
		a=10;
		b=20;
		c=30;
	}
	void displayabc()
	{
		System.out.println("a=" + a + ", b=" + b + ", c=" + c);
	}		
};

class Derived extends AccessSpecifier
{
	Derived()
	{
		super();
		b = 200;
		c = 300;
	}
};

class SuperClassConstructor {
	public static void main(String[] args) {
	
	Derived ob = new Derived();
	
	ob.c = 2000;
	ob.displayabc();
	}
}