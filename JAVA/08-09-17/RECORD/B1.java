//User Defined Exception Handling for Voting

class A1 extends Exception
{
	A1(String S)
	{
		super(S);
	}
}
class B1
{
	static void validate(int age)throws A1
	{
		if(age<18)
			throw new A1("Not Allowed");
		else
			System.out.println("Allowed to Vote\n");
	}
	public static void main(String args[])
	{
		try
		{
			validate(19);
			validate(13);
		}
		catch(Exception Exp)
		{
			System.out.println(Exp);
		}
	}
}