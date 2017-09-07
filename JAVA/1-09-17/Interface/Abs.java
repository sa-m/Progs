abstract class A
{
	int i=10;
	abstract void disp();			
	A()
	{
		System.out.println("Hello");
	}
}
class B extends A
{
	int i;
	void disp()				//must have lower or Same access specifier than the function it is Over-riding
	{
		System.out.println("HI");
	}
}
class Abs
{
	public static void main(String []args)
	{
		A ob = new B(); //Object of Abstract Class A is created by constructor of child class B
		ob.disp();
		System.out.println(ob.i);
	}
}