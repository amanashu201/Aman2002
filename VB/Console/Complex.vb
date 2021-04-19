class Complex
	dim real as single
	dim imag as single
	
	sub new()
	
	end sub
	sub new(r as single, i as single)
		real = r
		imag = i
	end sub
	function add(x as Complex) as Complex
		dim t as new Complex()
		t.real = real + x.real
		t.imag = real + x.imag
		return t
	end function
	sub display()
		Console.Writeline("real: {0}, imaginary: {1}", real, imag)
	end sub
end class

module ComplexTest
	sub main
		dim c1 as new Complex(10.5, 5.2)
		dim c2 as new Complex(20.5, 7.2)
		dim c3 as new Complex()
		c3 = c1.add(c2)
		c3.display()
	end sub
end module