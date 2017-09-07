import java.util.*;

class Array3
{
    private static Scanner sc;
   public static void main(String args[])
   {
     sc=new Scanner(System.in);
     System.out.println("enter");
     String s1;
int i;
      s1=sc.nextLine();
     for(i=0;i<s1.length();i++)
     {
        char ch=s1.charAt(i);
       System.out.print(ch);
        System.out.println();
      }
   }
}
        