Module Module1
    Structure Struct
	
        Public x As Integer
        Public y As Integer
		
    End Structure
    Sub Main()
		Dim sum As Integer
        Dim st As New Struct
		
        Console.Write("Enter a number: ")
		st.x = Console.ReadLine()
		
		Console.Write("Enter a another number: ")
		st.y = Console.ReadLine()
		
        sum= st.x + st.y
        Console.WriteLine("The result is {0}", sum)
        Console.Writeline()

    End Sub 
End Module