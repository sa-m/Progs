//NullPointerException

import java.util.Scanner;
class HNE
{
	public static void main(String args[])
	{
		String p=null;
		try
		{
			if(p.equals("Hello"))
				System.out.print("Same");
		}
		catch(java.lang.NullPointerException Exp)
		{
			System.out.print("Value is NULL");
		}
	}
}