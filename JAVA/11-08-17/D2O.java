import java.util.Scanner;
class D2O
{
	public static void main(String []args)
	{
		int n,p=0,d,c=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Decimal No :");
		n = sc.nextInt();
		while(n!=0)
		{
			d = n%8;
			p += d*(int)Math.pow(10,c);
			c++;n/=8;
		}
		System.out.println("The Octal No. is : "+p);
	}
}