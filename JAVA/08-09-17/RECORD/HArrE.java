import java.util.Scanner;
class HArrE		//Handling Arithmetic Exception
{
	/**
	public static void main(String args[])
	{
		int a[] = new int[5];
		int i=a[5]
	}		
		Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: 5
        at HArrE.main(HArrE.java:7)
	*/
	public static void main(String args[])
	{	Scanner sc = new Scanner(System.in);
		System.out.print("Enter Index : ");
		int i=sc.nextInt();
		int a[] = new int[5];
		try
		{	a[i]=0;
			System.out.print("Enter Data : ");
			a[i]=sc.nextInt();
			System.out.print("Data Stored.\n");
		}
		catch(java.lang.ArrayIndexOutOfBoundsException Exp)
		{	
			System.out.println("\nMax size of Array is 5");
		}
	}
}