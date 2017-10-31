import java.applet.*;
import java.awt.*;
public class B extends Applet
{
		String S;
	public void init()
	{
		setBackground(Color.white);
		setForeground(Color.red);
	}

	public void start()
	{
		S=getParameter("p1");
	}
	public void paint(Graphics x)
	{
		x.drawString(S,100,150);
	}
}                                  