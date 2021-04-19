Module Message
   Sub Main()
      Dim message As String
	  
      Console.Write("Enter message: ")
      message = Console.ReadLine
	  
      Console.WriteLine()
      Console.WriteLine("Your Message: {0}", message)
      Console.ReadLine()
   End Sub
End Module