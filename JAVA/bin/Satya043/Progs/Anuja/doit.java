import java.util.*;
class Array1
{
   private static Scanner sc;
   public static void main(String args[])
  {
     sc=new Scanner(System.in);
     int[] a=new int[10];
     int i;
     System.out.println("enter array");
     for(i=0;i<10;i++)
         a[i]=sc.nextInt();
     for(i=0;i<10;i++)
     {
       if(a[i]%2==0)
           System.out.println(a[i]+"is even");
        else
            System.out.println(a[i]+"is odd"); 
     }
   }
}