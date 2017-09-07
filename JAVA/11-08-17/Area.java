import java.util.Scanner;
class Area
{
	double area;
	Area(double a, double b)
	{
		area = a*b;
		System.out.println("Area of Rectangle : "+area);
	}
	Area(double a,double b,double c)
	{
		double s = (a+b+c)/2;
		area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
		System.out.println("Area of Triangle : "+area);
	}
	public static void main(String []args)
	{
		double a,b,c;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter : 1- Area of Rectangle\n\t2- Area of Triangle\n");
		int ch = sc.nextInt();
		switch(ch)
		{
			case 1:
			{
				System.out.println("Enter lenght & breadth of Rectangle : ");
				a = sc.nextDouble();
				b = sc.nextDouble();
				Area x = new Area(a,b);
				break;
			}
			case 2:
			{
				System.out.println("Enter 3 sides of Triangle : ");
				a = sc.nextDouble();
				b = sc.nextDouble();
				c = sc.nextDouble();
				Area x = new Area(a,b,c);
				break;
			}
			default:
				System.out.println("Invalid Chooice");
		}
	}
}