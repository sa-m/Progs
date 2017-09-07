import java.util.*;
class String
{
	public static void main(String[] args)
	{
		String str;
		int i;
		System.out.println("enter a string");
		Scanner s=new Scanner(System.in);
		str=s.next();
		char[] ar=new char[50];
		for(i=0;i<str.length();i++)
		{	
			ar[i]=str.charAt(i);	
		}	
	for(i=0;i<str.length();i++)
		{	
			System.out.println(ar[i]);	
		}		
	}
}