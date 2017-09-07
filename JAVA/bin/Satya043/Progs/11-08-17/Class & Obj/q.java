class p
{
	int x;
}
class q
{
	public static void main(String []args)
	{
		p d = new p();
		d.x=10;
		int y=d.x;
		System.out.println(y);
		//System.out.println(x);	Cannot be accessed without Object
		System.out.println(d);
		System.out.println(d.x);
	}
}