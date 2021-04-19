Class A
	Public Name As String
	Public Sub Display()
	
		Console.WriteLine("Name Of Student:{0}",Name)
	End Sub
End Class

Class B
	Inherits A
	Public Place As String
	Public Sub DisplayPlace()
	
		Console.WriteLine("Address:{0}",place)
	End Sub
End Class

Class C
	Inherits B
	Public rno As Integer
	Public Sub Rollno()
	
		Console.WriteLine("Students Roll no:",rno)
	End sub
End Class

Module Profile 
            Dim obc As C = New C()  
      public sub Main()
            obc.Display()  
            'c.GetPlace()  
            'c.GetRollno()  
           
    End Sub   
End Module
	
	