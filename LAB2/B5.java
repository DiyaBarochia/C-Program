import java.util.Scanner;
public class B5 
{
      public static void main(String[] a)
    {
        Scanner sc= new Scanner(System.in);
        int m=sc.nextInt();
        System.out.println("Enter no in meter:"+m);
        double f=sc.nextDouble();
        f=m*3.2;
        System.out.println("Number in feet:"+f);
    }
}
