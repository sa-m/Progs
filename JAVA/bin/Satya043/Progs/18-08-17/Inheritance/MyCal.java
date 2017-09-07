class Calc
{
	int z;
	public void add(int x, int y)
	{
		z=x+y;
		System.out.println("The Sum is : "+z);
	}
	public void sub(int x, int y)
	{
		z=x-y;
		System.out.println("The Difference is : "+z);
	}
}
public class MyCal extends Calc
{
	public void mul(int x, int y)
	{
		z=x*y;
		System.out.println("The Product is : "+z);
	}
	public static void main(String []args)
	{
		int x = 25, y = 10;
		MyCal a = new MyCal();
		a.add(x,y);
		a.sub(x,y);
		a.mul(x,y);
	}
}