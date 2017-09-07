import java.util.Scanner;
abstract class Employee
{
	String name,p_name;
	int id;
	abstract void work();
}
class SWengg extends Employee
{
	Scanner sc=new Scanner(System.in);
	public void work()
	{
		Employee e = new SWengg();
		System.out.print("Enter Name : ");
		e.name = sc.nextLine();
		System.out.print("Enter ID : ");
		e.id = sc.nextInt();
		System.out.print("Enter Project Name : ") 
		e.p_name = "Interface";
	}
	public void disp()
}
interface Manager
{
	int M_id=16022, emp_id=81043;
	String M_name = "Satya";
}
public class Exec implements Manager
{
	
	public static void main(String args[])
	{
		Employee e = new SWengg();
		Manager m = new Exec();
		System.out.println("Project Name : "+e.p_name);
		System.out.println("Manager Name : "+m.M_name);
		System.out.println("Manager Id : "+m.M_id);
	}
}
	