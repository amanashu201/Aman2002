Module CalculateNumber
	Sub Main()
		Dim num As Integer
		Dim sum As Double=0.0
		
		for i = 1 To 10
			Console.Write("Enter a number:")
			num = Console.ReadLine()
		
			If num < 0 Then  
                Exit For  
			End If  
            sum += num  
		next
	
		Console.WriteLine("Total sum is:{0}", sum)
	End Sub
End Module

	
		
		