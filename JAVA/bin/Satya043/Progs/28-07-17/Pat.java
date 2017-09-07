import java.util.Scanner;
class Pat
{
	public static void main(String []args)
	{
		int i,j;
		Scanner sc = new Scanner(System.in);
		System.out.print("\nEnter Number of Rows: ");
		double n = sc.nextDouble();
		for( i=1;i<=(int)Math.ceil(n/2);i++)
		{
			for( j=1;j<=i;j++)
				System.out.print(j+" ");
			System.out.println();
		}
		if(n%2==0.0)
			i++;
		for( i-=2;i>0;i--)
		{
			for( j=1;j<=i;j++)
				System.out.print(j+" ");
			System.out.println();
		}
	}
}