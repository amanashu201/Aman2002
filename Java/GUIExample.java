import java.awt.*;

class GUIExample extends Frame {
	GUIExample() {
		Label l1 = new Label("Hello!");
		l1.setBounds(20,20,1220,50);
		this.add(l1);
		this.setSize(300,300);
		this.setVisible(true);
	}
	public static void main(String[] args) {
		new GUIExample();
	}
}