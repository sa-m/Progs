//ArithmeticException
//ArrayIndexOutOfBoundsException

import java.util.Scanner;
class HAAE2
{
	public static void main(String args[])
	{
		int a,b,n[] = new int[5];
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
		finally
		{
			System.out.print("\nEnter Index : ");
			a=sc.nextInt();
			try
			{	n[a]=0;
				System.out.println("Index Initialised");
			}
			catch(java.lang.ArrayIndexOutOfBoundsException Exp)
			{	
				System.out.println("\nArray size is 5");
			}
		}
	}
}