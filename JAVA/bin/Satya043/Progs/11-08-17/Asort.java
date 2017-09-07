import java.util.Scanner;
class Asort
{
	public static void main(String []args)
	{
		int i,j,c;
		int a[] = new int[10];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 10 No.s :");
		for(i=0;i<10;i++)
			a[i] = sc.nextInt();
		for(i=0;i<9;i++)
			for(j=0;j<9-i;j++)
				if(a[j]<a[j+1])
				{
					c=a[j];
					a[j]=a[j+1];
					a[j+1]=c;
				}				
		System.out.println("\nThe sorted Array is : ");
		for(i=0;i<10;i++)
			System.out.print(a[i]+" ");
	}
}