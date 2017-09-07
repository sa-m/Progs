import java.util.*;
class Array2
{  
  public static void main(String args[])
  {
     Scanner sc;
       sc=new Scanner(System.in);
      int[] a=new int[10];
      int min,i,max;
      System.out.println("enter array");
      for(i=0;i<10;i++)
      {
        a[i]=sc.nextInt();
       }
      max=a[0];
      min=a[0];
      for(i=0;i<10;i++)
      {
        if(a[i]>max)
            max=a[i];
        else
           min=a[i];
    }
    System.out.println("largest "+max);
     System.out.println("smallest "+min);
  }
}
    