//ArithmeticException

import java.util.Scanner;
class HAE
{
	public static void main(String args[])
	{
		int a,b;
		Scanner sc = new Scanner(System.in);
		System.out.print("\nEnter 2 Nos. : ");
		a=sc.nextInt();
		b=sc.nextInt();
		try
		{
			System.out.println(a+" / "+b+" = "+(a/b));
		}
		catch(java.lang.ArithmeticException Exp)
		{
			System.out.println("Cannot divide By Zero");
		}
	}
}