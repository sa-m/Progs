import java.util.*;
class Array4
{
  private static Scanner sc;
   public static void main(String args[])
   {
      String s1="AVATAR";
      String s2="avatar";
      System.out.println("case sensitive");
      if(s1.equals(s2))
          System.out.println("they are same");
       else
           System.out.println("not same");
     

      System.out.println("case insensitive");
      if(s1.equalsIgnoreCase(s2))
           System.out.println("same");
      
       else
           System.out.println("not same");
   }
}