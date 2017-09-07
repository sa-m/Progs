class Ax
{
	double x,y;
	Ax(double c, double d)   //file name same as func name...  Hence it is the constructor
	{
		x=c;
		y=d;
	}
	/** If Ax() not Defined
	
	error: constructor Ax in class Ax cannot be applied to given types;
                Ax b = new Ax();
                       ^
  required: double,double
  found: no arguments
  reason: actual and formal argument lists differ in length*/
	
	Ax()
	{
		x=10;
		y=15;
	}
	
	
	double show()
	{
		return x*y;
	}
}
public class B
{
	public static void main(String []args)
	{
		Ax a = new Ax(10,20);
		Ax b = new Ax();
		System.out.println(a.show());
		System.out.println(b.show());
	}
}
		