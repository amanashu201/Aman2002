import java.awt.*;
import java.awt.event.*;

class AdditionAppGUI extends Frame implements ActionListener {
	Label lbl_augend = new Label("Augend");
	Label lbl_addend = new Label("Addend");
	Label lbl_sum = new Label("Addend");
	TextField txt_augend = new TextField();
	TextField txt_addend = new TextField();
	TextField txt_sum = new TextField();
	
	void createGUI() {
		this.setSize(300, 300);
		this.setVisible(true);
		this.setLayout(null);
		
		//Label lbl_augend = new Label("Augend");
		lbl_augend.setBounds(20, 40, 50, 20);
		this.add(lbl_augend);
		//TextField txt_augend = new TextField();
		txt_augend.setBounds(80, 40, 50, 20);
		this.add(txt_augend);
		
		//Label lbl_addend = new Label("Addend");
		lbl_addend.setBounds(20, 80, 50, 20);
		this.add(lbl_addend);
		//TextField txt_addend = new TextField();
		txt_addend.setBounds(80, 80, 50, 20);
		this.add(txt_addend);
		
		//Label lbl_sum = new Label("Sum");
		lbl_sum.setBounds(20, 120, 50, 20);
		this.add(lbl_sum);
		//TextField txt_sum = new TextField();
		txt_sum.setBounds(80, 120, 50, 20);
		this.add(txt_sum);
		
		Button btn_add = new Button("Add");
		btn_add.setBounds(20, 160, 50, 20);
		this.add(btn_add);
		
		Button btn_reset = new Button("Reset");
		btn_reset.setBounds(80, 160, 50, 20);
		this.add(btn_reset);
		
		btn_add.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent e) {
		int a, b, c;
		a = Integer.parseInt(txt_augend.getText());
		b = Integer.parseInt(txt_addend.getText());
		c = a + b;
		txt_sum.setText(Integer.toString(c));
	}
	
	public static void main(String[] args) {
		AdditionAppGUI ob = new AdditionAppGUI();
		ob.createGUI();
	}
}