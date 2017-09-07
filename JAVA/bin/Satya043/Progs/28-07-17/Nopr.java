import java.io.*;
class Nopr
{
	public static void main(String []args)throws IOException
	{
		int n,j,i,c,d=0;
		BufferedReader br = new BufferedReader ( new InputStreamReader (System.in));
		System.out.print("\nEnter Number, till which prime no to search : ");
		n=Integer.parseInt(br.readLine());
		if(n<2)
			System.out.println("\n No Prime No.s");
		for(j=2;j<=n;j++)
		{
			for(c=0,i=2;i<=(int)Math.sqrt(j);i++)
				if(j%i==0)
					c++;
			if(c==0)
				d++;
		}
		System.out.println("\n "+d+" Prime Nos Found");
	}
}