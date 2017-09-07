import java.io.*;
class B
{
	public static void main(String []args)throws IOException
	{
		int a,b;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Number");
		a = Integer.parseInt(br.readLine());
		System.out.println("\nOutput :"+a);
	}
}