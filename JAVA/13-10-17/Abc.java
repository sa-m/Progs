import java.applet.*;
import java.awt.*;
public class Abc extends Applet
{
	int x[]={40,49,60,75,57,40,35};
	int y[]={260,310,315,280,260,270,265};
	int a[]={140,150,180,200,170,150,140};
	int b[]={260,310,315,280,260,270,265};
	
	public void init()
	{
		setBackground(Color.white);
		setForeground(Color.yellow);
	}
	public void paint(Graphics x)
	{
		//x.setFont(new Font("Arial Black",Font.BOLD+Font.ITALIC,25));
		//x.drawString("Hello",100,200);
		x.drawLine(165,125,165,175);
		x.drawOval(60,60,200,200);
		x.fillOval(90,120,50,20);
		x.fillOval(190,120,50,20);
		x.drawArc(110,130,95,95,0,-180);
		x.drawLine(165,175,150,160);
		//x.drawRect(40,60,70,40);
		//x.fillRect(140,60,70,40);
		//x.drawRoundRect(40,60,70,10,10,20);
		//x.fillRoundRect(40,120,70,40,10,20);
		//x.drawArc(140,60,10,40,0,120);
		//x.fillArc(240,180,70,40,0,-180);
		//x.drawPolygon(x,y,7);
		//x.fillPolygon(a,b,7);
	}
}
		