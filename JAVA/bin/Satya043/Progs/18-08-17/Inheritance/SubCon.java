class SuperCon
{
	int age;
	SuperCon(int age)
	{
		this.age = age;
	}
	public void getage()
	{
		System.out.println("age (in SuperClass) is  : "+age);
	}
}
public class SubCon extends SuperCon
{
	SubCon(int age)
	{
		super(age);
	}
	public static void main(String []args)
	{
		SubCon S = new SubCon(24);
		S.getage();
	}
}