<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FrmFactorial
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.LblNumber = New System.Windows.Forms.Label()
        Me.TxtNumber = New System.Windows.Forms.TextBox()
        Me.TxtFactorial = New System.Windows.Forms.TextBox()
        Me.LblFactorial = New System.Windows.Forms.Label()
        Me.BtnCalculate = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'LblNumber
        '
        Me.LblNumber.AutoSize = True
        Me.LblNumber.Location = New System.Drawing.Point(139, 77)
        Me.LblNumber.Name = "LblNumber"
        Me.LblNumber.Size = New System.Drawing.Size(77, 25)
        Me.LblNumber.TabIndex = 0
        Me.LblNumber.Text = "Number"
        '
        'TxtNumber
        '
        Me.TxtNumber.Location = New System.Drawing.Point(244, 74)
        Me.TxtNumber.Name = "TxtNumber"
        Me.TxtNumber.Size = New System.Drawing.Size(150, 31)
        Me.TxtNumber.TabIndex = 1
        '
        'TxtFactorial
        '
        Me.TxtFactorial.Location = New System.Drawing.Point(244, 150)
        Me.TxtFactorial.Name = "TxtFactorial"
        Me.TxtFactorial.Size = New System.Drawing.Size(150, 31)
        Me.TxtFactorial.TabIndex = 3
        '
        'LblFactorial
        '
        Me.LblFactorial.AutoSize = True
        Me.LblFactorial.Location = New System.Drawing.Point(139, 153)
        Me.LblFactorial.Name = "LblFactorial"
        Me.LblFactorial.Size = New System.Drawing.Size(77, 25)
        Me.LblFactorial.TabIndex = 2
        Me.LblFactorial.Text = "Factorial"
        '
        'BtnCalculate
        '
        Me.BtnCalculate.Location = New System.Drawing.Point(139, 225)
        Me.BtnCalculate.Name = "BtnCalculate"
        Me.BtnCalculate.Size = New System.Drawing.Size(112, 34)
        Me.BtnCalculate.TabIndex = 4
        Me.BtnCalculate.Text = "Calculate"
        Me.BtnCalculate.UseVisualStyleBackColor = True
        '
        'FrmFactorial
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(10.0!, 25.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(576, 311)
        Me.Controls.Add(Me.BtnCalculate)
        Me.Controls.Add(Me.TxtFactorial)
        Me.Controls.Add(Me.LblFactorial)
        Me.Controls.Add(Me.TxtNumber)
        Me.Controls.Add(Me.LblNumber)
        Me.Name = "FrmFactorial"
        Me.Text = "Factorial"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents LblNumber As Label
    Friend WithEvents TxtNumber As TextBox
    Friend WithEvents TxtFactorial As TextBox
    Friend WithEvents LblFactorial As Label
    Friend WithEvents BtnCalculate As Button
End Class
