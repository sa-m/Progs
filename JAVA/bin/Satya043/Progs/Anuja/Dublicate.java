import java.util.*;
class Dublicate
{
	public static void main(String...k)
	{
		String s="occupation";
		int l,i,j;
		char ch;
		for(i=0;i<s.length();i++)
		{	ch=s.charAt(i);
			for(j=i+1;j<s.length();j++)
			{
				if(ch==(s.charAt(j)))
				{
					
					System.out.println(s.charAt(j)+" ");
				}
			}
				
				
		}		
	}
}		
		