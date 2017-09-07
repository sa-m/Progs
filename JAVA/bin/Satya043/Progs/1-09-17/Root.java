import java.util.Scanner;
interface E1
{
	void get();
	void calc();
	void disp();
}
interface E2
{
	void get();
	void calc();
	void disp();
}
public class Root implements E1,E2
{
	public int a,b,c;
	public double x,y;
	Scanner sc = new Scanner(System.in);
	public void get()
	{
		System.out.println("\n\taX^2 + bX + c = 0");
		System.out.print("\nAs per above Enter value of a,b,c : ");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
	}
	public void calc()
	{
		x = ((-b)-(Math.sqrt(b*b-4*a*c)))/(2*a);
		y = ((-b)+(Math.sqrt(b*b-4*a*c)))/(2*a);
	}
	public void disp()
	{
		System.out.println("\nRoots are :  "+x+" and "+y);
	}
	public static void main(String[] args)
	{
		E1 p = new Root();
		p.get();p.calc();p.disp();
		E2 q = new Root();
		q.get();q.calc();q.disp();
	}
}