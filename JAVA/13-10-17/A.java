import java.applet.*;
import java.awt.*;
public class A extends Applet
{
	public void init()
	{
		setBackground(Color.white);
		setForeground(Color.red);
	}
	public void paint(Graphics x)
	{
		x.drawString("HellO",50,100);
	}
}