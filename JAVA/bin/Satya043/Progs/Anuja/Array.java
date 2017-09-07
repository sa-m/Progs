import java.util.*;
class Array
{
	public static void main(String args[])
	{
		Scanner s1=new Scanner(System.in);
		Scanner s2=new Scanner(System.in);
		int array[]=new int[10];
		int i=0,n;
		System.out.println("enter array length");
		n=s2.nextInt();
		System.out.println("enter the elemnts of array");
		
		for(i=0;i<n;i++)
		{
			array[i]=s1.nextInt();
		}

		for(i=0;i<n;i++)
		{
			if(array[i]%2==0)
				System.out.println(array[i]+" is even");
			else	
				System.out.println(array[i]+" is odd");
		}
	}
}		