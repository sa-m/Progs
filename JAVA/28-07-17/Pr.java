import java.util.Scanner;
class Pr
{
	public static void main(String []args)
	{
		int n,i,c=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("\nEnter Number : ");
		n = sc.nextInt();
		for(i=2;i<=(int)Math.sqrt(n);i++)
			if(n%i==0)
				c++;
		if(c==0)
			System.out.println("\n Prime");
		else
			System.out.println("\n NOT Prime");
	}
}