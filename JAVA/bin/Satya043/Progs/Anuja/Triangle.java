import java.util.*;
class Triangle
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int i,j,k,l,n;
		System.out.println("enter the number of lines");
		n=s.nextInt();
		for(i=0;i<n;i++)
		{
			for(k=0;k<i;k++)
				System.out.print(" ");
			for(j=i;j<n;j++)
				System.out.print("*");
			for(l=i;l<n-1;l++)
				System.out.print("*");
			System.out.println();
		}
	}
}	