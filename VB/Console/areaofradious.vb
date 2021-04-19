Module RectangleArea
   Sub Main()
      Const PI =3.14
      Dim radius, area As Single
	  
	  Console.Write("Enter a radius: ")
		radius = Console.ReadLine()
      
      area = PI * radius * radius
      Console.WriteLine("Area = " & Str(area))
      Console.ReadLine()
   End Sub
End Module