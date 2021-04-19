import java.awt.*;

public class GUIComponestExperiment extends Frame{
	public GUIComponestExperiment() {
		TextArea txt_address = new TextArea();
		txt_address.setBounds(30,30, 100, 100);
		this.setSize(500,500);
		this.setLayout(null);
		this.setVisible(true);
		this.add(txt_address);
	}
	public static void main(String[] args) {
		new GUIComponestExperiment();
	}
}