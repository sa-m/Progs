import java.util.*;
class num
{
    private static Scanner sc;
     public static void check()
     {
        int n,i,ct=0;
        sc=new Scanner(System.in);
        System.out.println("enter num");
         n=sc.nextInt();
         for(i=1;i<=n;i++)
         {
            if(n%i==0)
              ct++;
         }
       if(ct==2)
         System.out.println("prime");
        else
              System.out.println("not prime");
     }
public static void main(String args[])
{
    check();
}
}