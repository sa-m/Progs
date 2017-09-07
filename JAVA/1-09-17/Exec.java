import java.util.*;
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
	{	Employee e = new SWengg();
		System.out.print("Enter Name : ");
		e.name = sc.nextLine();
		System.out.print("Enter ID : ");
		e.id = sc.nextInt();
		//System.out.print("Enter Project Name : "); 		//Scanner Cannot take 2 strings in the Same Program
		e.p_name = "Interface";

		// display Work, name , ID
		System.out.println("\n\nProject Name : "+e.p_name);
		System.out.println("Name : "+e.name);
		System.out.println("Id : "+e.id);
	}
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
		e.work();
		Manager m = new Exec();
		//Display  Manager Name, Manager ID
		//System.out.println("\nProject Name : "+e.p_name);
		System.out.println("Manager Name : "+m.M_name);
		System.out.println("Manager Id : "+m.M_id);
	}
}
	