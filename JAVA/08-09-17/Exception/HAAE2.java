import java.util.Scanner;
//Using 2 try Blocks
class HAAE2		//Handling Arithmetic & Array Exception
{
	public static void main(String args[])
	{
		int a,b,x=1,i;
		int n[] = new int[5];
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
			System.out.println("Cannot divide By Zero");
		}
		finally
		{
			System.out.print("\nEnter Index : ");
			i=sc.nextInt();
			try
			{	n[i]=0;
				System.out.print("Enter Data : ");
				n[i]=sc.nextInt();
				System.out.print("Data Stored.\n");
			}
			catch(java.lang.ArrayIndexOutOfBoundsException Exp)
			{	
				System.out.println("\nMax size of Array is 5");
			}
			System.out.println("\nPress 1 to continue : ");
			x=sc.nextInt();
		}
		}
	}
}