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
			System.out.println("Allowed to Vote");
	}
	public static void main(String args[])
	{
		A a=new B();
		try
		{
			validate(13);
		}
		catch(Exception Exp)
		{
			System.out.println(Exp); 		//value of Exp is 'A1' ie class name
			System.out.println("\nException Found");
		}
	}
}