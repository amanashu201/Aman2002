Public Class FrmFactorial
    Private Sub BtnCalculate_Click(sender As Object, e As EventArgs) Handles BtnCalculate.Click
        Dim n, f As Integer
        f = 1
        n = TxtNumber.Text

        For i As Integer = 1 To n
            f *= i
        Next

        TxtFactorial.Text = f

    End Sub
End Class
