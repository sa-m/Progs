import java.util.Scanner;
class Array
{
	public static void main(String []args)
	{
		int i,h;
		int a[] = new int[5];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 5 No.s :");
		for(i=0;i<5;i++)
			a[i] = sc.nextInt();
		for(h=a[0],i=1;i<5;i++)
			if(a[i]<h)
				h=a[i];
		System.out.println("The Smallest No. is : "+h);
	}
}