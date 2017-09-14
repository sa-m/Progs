//ArrayIndexOutOfBoundsException

import java.util.Scanner;
class HArrE
{
	public static void main(String args[])
	{	Scanner sc = new Scanner(System.in);
		System.out.print("Enter Index : ");
		int i=sc.nextInt();
		int a[] = new int[5];
		try
		{	a[i]=0;
			System.out.println("Index Initialised");
		}
		catch(java.lang.ArrayIndexOutOfBoundsException Exp)
		{	
			System.out.println("Max size of Array is 5");
		}
	}
}