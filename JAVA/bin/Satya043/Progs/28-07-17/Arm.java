import java.io.*;
class Arm
{
	public static void main(String []args)throws IOException
	{
		int a,b,d,s=0;
		BufferedReader br = new BufferedReader ( new InputStreamReader (System.in));
		System.out.print("\nEnter Number : ");
		a=Integer.parseInt(br.readLine());
		for(b=a;b!=0;b/=10)
		{
			d=b%10;
			s+=d*d*d;
		}
		if(s==a)
			System.out.println("\n Armstrong");
		else
			System.out.println("\n NOT Armstrong");
	}
}