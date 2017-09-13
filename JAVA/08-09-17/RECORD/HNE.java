import java.util.Scanner;
class HNE		//Handling NullPointer Exception
{
	/**
	public static void main(String args[])
	{
		String p=null;
		if(p.equals("Hello"))
			System.out.print("Same");
		else
			System.out.print("Not Same");
	}
			Exception in thread "main" java.lang.NullPointerException
			at HNE.main(HNE.java:7)
	*/
	public static void main(String args[])
	{
		String p=null;
		try
		{
			if(p.equals("Hello"))
				System.out.print("Same");
			else
				System.out.print("Not Same");
		}
		catch(java.lang.NullPointerException Exp)
		{
			System.out.print("Value is NULL");
		}
	}
}