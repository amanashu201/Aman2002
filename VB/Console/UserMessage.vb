Module Module1

    Sub Main()
        Dim user_message As String
        Console.Write("Enter your message: ")
        user_message = Console.ReadLine
        Console.WriteLine()
        Console.WriteLine("You typed: {0}", user_message)
        Console.ReadLine()
    End Sub

End Module