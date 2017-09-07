import java.io.*;
class Pas
{
	public static void main(String []args)throws IOException
	{
		int rows,r,num;
		BufferedReader br = new BufferedReader ( new InputStreamReader (System.in));
		System.out.print("\nEnter No of Rows : ");
		rows=Integer.parseInt(br.readLine());
		System.out.println();
		for (int i = 0; i < rows; i++) 
		{
			num = 1;
			r = i + 1;
			for (int j = rows - i; j > 0; j--) 
				System.out.print(" ");
			for (int col = 0; col <= i; col++) 
			{
				if (col > 0) 
					num = num * (r - col) / col;
				System.out.print(num + " ");
			}
			System.out.println();
		}
	}
}