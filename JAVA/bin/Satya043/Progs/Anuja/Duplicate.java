import java.util.*;
import java.lang.String.*;
class c
{   private static Scanner sc;
    public static void check()
    {
       String s="OCCUPATION";
     int i,ct=0,j;
char ch=' ';
     for(i=0;i<s.length();i++)
    {   ct=0;
       for(j=i+1;j<s.length();j++)
       {
        if(s.charAt(i)==s.charAt(j))
        {
           ch=s.charAt(i);
             ct++;
         }
       }
     if(ct>0)
     { System.out.print(ch);
      System.out.println(ct);
     }
   
   }
  }
public static void main(String args[])
{
    check();
}
}