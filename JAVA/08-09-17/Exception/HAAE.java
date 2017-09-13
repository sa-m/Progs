import java.util.Scanner;
//Using Single Try block
class HAAE		//Handling Arithmetic & Array Exception
{
	public static void main(String args[])
	{
		int a,b,i,x=1;
		int n[] = new int[5];
		Scanner sc = new Scanner(System.in);
		while(x==1)
		{
		System.out.print("\nEnter 2 Nos. : ");
		a=sc.nextInt();
		b=sc.nextInt();
		System.out.print("\nEnter Index : ");
		i=sc.nextInt();
		try
		{
			n[i]=0;
			System.out.print("Enter Data : ");				//Goes to catch block as soon as any exception is found
			n[i]=sc.nextInt();
			System.out.print("Data Stored.\n");
			System.out.println("\n"+a+" / "+b+" = "+(a/b));
		}
		catch(java.lang.ArithmeticException Exp)
		{
			System.out.println("\nCannot divide By Zero");
		}
		catch(java.lang.ArrayIndexOutOfBoundsException Exp)
		{	
			System.out.println("\nMax size of Array is 5");
		}
		finally
		{
			System.out.println("\nPress 1 to continue : ");
			x=sc.nextInt();
		}
		}
	}
}