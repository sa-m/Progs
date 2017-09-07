class Super
{
	int num = 20;
	public void disp()
	{
		System.out.println("This is Disp SuperClass");
	}
}
public class Sub extends Super
{
	int num = 10;
	public void disp()
	{
		System.out.println("This is Disp Sub Class");
	}
	public void My()
	{
		Sub x = new Sub();
		x.disp();
		super.disp();
		System.out.println("num value in Sub Class : "+x.num);
		System.out.println("num value in Super Class : "+super.num);
	}
	public static void main(String []args)
	{
		Sub y = new Sub();
		y.My();
	}
}