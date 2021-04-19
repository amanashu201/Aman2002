Mdule A
	Structure struct
		Public x As Integer
		Public y As integer
	End Structure
	
	Sub Main()
		Dim st As New struct
		st.x = 10
		st.y = 20
		Dim sum As Integer = si.x + st.y
		
		Console.WriteLine("The result is {0}",sum)
	End Sub 
End Module