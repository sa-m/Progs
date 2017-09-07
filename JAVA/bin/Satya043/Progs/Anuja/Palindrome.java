import java.util.*;
class num
{
   public static Scanner sc;
    public static int check()
    {
       int num,rev=0,r,temp;
         System.out.println("enter num");
        sc=new Scanner(System.in);
        num=sc.nextInt();
         temp=num;
         while(num!=0)
         {
           r=num%10;
           rev=(rev*10)+r;
           num/=10;
         }
        if(rev==temp)
           return 1;
        else
           return 0;
     }
  public static void main(String args[])
{
   int z=check();
     if(z==1)
         System.out.print("palindrome");
      else
         System.out.print("not a palindrome");
}
}
        