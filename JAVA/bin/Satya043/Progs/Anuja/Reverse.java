import java.util.*;
class Reverse
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int num,r;
		System.out.println("enter a number");
		num=s.nextInt();
		System.out.println("reverse number is");
		while(num!=0)
		{
			r=num%10;
			System.out.print(r);
			num=num/10;
		}
	}	
}	