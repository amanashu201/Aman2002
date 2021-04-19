Module Table
	Sub Main()
		Dim i,num As Integer
		Console.Write("Please enter number to print table")
		num = Console.ReadLine()
		
		Console.Write("Table" &num)
		
		For i=1 To 10
			Console.Write(num &"*" &i &"="&i*num & vbcrlf  )
		Next
		Console.ReadLine()
	End Sub
End Module
