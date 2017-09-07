import java.util.*;
class num
{
   public static Scanner sc;
    public static int check()
    {
       int num,rev=0,r;
         System.out.println("enter num");
        sc=new Scanner(System.in);
        num=sc.nextInt();
         while(num!=0)
         {
           r=num%10;
           rev=(rev*10)+r;
           num/=10;
         }
        return rev;
     }
  public static void main(String args[])
{
    System.out.print(check());
}
}
        