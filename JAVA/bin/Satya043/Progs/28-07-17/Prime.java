import java.util.Scanner;
import java.math.*;
class Prime
{
	public static void main(String []args)
	{
		int a,i,b,c=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number");
		a = sc.nextInt();
		b = (int)(Math.sqrt(a));
		for(i=2;i<=b;i++)
			if(a%i==0)
				c++;
		if(c == 0)
			System.out.println("\nPrime");
		else
			System.out.println("\nNot Prime");
	}
}