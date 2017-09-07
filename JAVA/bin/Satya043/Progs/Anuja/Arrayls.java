import java.util.*;
class Arrayls
{
	public static void main(String args[])
	{
		Scanner s1=new Scanner(System.in);
		Scanner s2=new Scanner(System.in);
		int array[]=new int[10];
		int i=0,n,max,min;
		System.out.println("enter array length");
		n=s2.nextInt();
		System.out.println("enter the elements of array");
		
		for(i=0;i<n;i++)
		{
			array[i]=s1.nextInt();
		}
		
		max=array[0];
		for(i=0;i<n;i++)
		{
			if(array[i]>max)
			{
				max=array[i];
				
			}
		}	
		
		System.out.println(max+" is largest number");

		min=array[0];
		for(i=0;i<n;i++)
		{
			if(array[i]<min)
			{
				min=array[i];
				
			}
		}
		System.out.println(min+" is smallest number");
	}
}	