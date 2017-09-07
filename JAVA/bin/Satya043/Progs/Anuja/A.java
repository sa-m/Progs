class A
{
	public static void main(String []k)
	{
		int a=10,b=20;
		System.out.println("a="+a+" b="+b);
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println("a="+a+" b="+b);
	}
}