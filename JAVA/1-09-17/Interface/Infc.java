interface X
{
	void show();
}
interface Y
{
	void disp();
}
public class Infc implements X,Y
{
	public void show()
	{
		System.out.println("Hello");
	}
	public void disp()
	{
		System.out.println("Hi");
	}
	public static void main(String args[])
	{
		X x = new Infc();
		x.show();
		Y y = new Infc();
		y.disp();
	}
}