import java.io.*;
import java.math.*;
class Pr_No
{
	public static void main(String []args)throws IOException
	{
		int a,i,j,c=0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Find Prime no. till N :\nEnter Value of N");
		a = Integer.parseInt(br.readLine());
		if(a<2)
			System.out.println("\nNo Prime Numbers");
		else
			System.out.println("\nThe Prime Nos. are : ");
		for(j=2;j<=a;j++,c=0)
		{	for(i=2;i<=(int)(Math.sqrt(j));i++)
				if(j%i==0)
					c++;
			if(c == 0)
				System.out.print(j+", ");
		}
		System.out.println("\n");
	}
}