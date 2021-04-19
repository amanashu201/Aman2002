Class A
	private a as Integer
	
	public sub new()
		a = 10
	end sub
	
	public sub display_a()
		Console.WriteLine("The value of a is {0}", a)
	end sub

End Class

Class B
	Inherits A
	
	public sub display()
		display_a()
	end sub
End Class

Module Inheritance
	Sub Main()
		Dim ob as new B()
		ob.display()
	End Sub
End Module