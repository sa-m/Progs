class Px
{
	int x=4;
	private int i=20;
	protected int k=30;
	public int q=40;
	private void show()
	{
		System.out.println("Hello");
	}
	public void disp()
	{
		System.out.println("Hi");
		System.out.println(i);
		show();
		hi();
	}
	void hello()
	{
		System.out.println("Good");
	}
	void hi()
	{
		System.out.println("Hi....");
	}
}