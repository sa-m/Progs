import java.io.*;
class A
{
	public static void main(String []args)throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter String");
		String b=br.readLine();
		System.out.println("\nOutput :"+b);
	}
}