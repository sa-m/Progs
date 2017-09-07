public class A extends Px
{
	public static void main(String []args)
	{
		A y = new A();
		//y.show();					Private Hence Error
		y.hello();
		System.out.println(y.x);	
		//System.out.println(y.i);	Private Hence Error
		System.out.println(y.k);
		System.out.println(y.q);
		Px z = new Px();
		//z.show();					Private Hence Error
		z.hello();
		System.out.println(z.x);
		//System.out.println(z.i);	Private Hence Error
		System.out.println(z.k);
		System.out.println(z.q);
	}
}