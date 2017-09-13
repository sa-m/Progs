class A
{
	void msg()throws Exception
	{
		System.out.println("Hello");
	}
}
class B extends A
{
	void msg()throws Exception
	{
		System.out.println("Hi");
	}
	public static void main(String args[])
	{
		A a=new B();
		try
		{
			a.msg();
		}
		catch(Exception Exp)
		{
			System.out.println(Exp);
			System.out.println("Exception Found");
		}
	}
}