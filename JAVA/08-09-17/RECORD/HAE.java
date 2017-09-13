import java.util.Scanner;
class HAE		//Handling Arithmetic Exception
{
	public static void main(String args[])
	{
		int a,b,x=1;
		Scanner sc = new Scanner(System.in);
		while(x==1)
		{
		System.out.print("\nEnter 2 Nos. : ");
		a=sc.nextInt();
		b=sc.nextInt();
		try
		{
			System.out.println(a+" / "+b+" = "+(a/b));
		}
		catch(java.lang.ArithmeticException Exp)
		{
			//System.out.println(Exp);
			System.out.println("Cannot divide By Zero");
		}
		finally
		{
			System.out.println("\nPress 1 to continue : ");
			x=sc.nextInt();
		}
		}
	}
}