import java.util.Scanner;
public class A4
{
    public static void main(String[] args)
    {
        int k= Integer.parseInt(args[0]);
        int l= Integer.parseInt(args[1]);
        System.out.println("Command line argument:"+(k+l));
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no1 and no2:");
        int i=sc.nextInt();
        int j=sc.nextInt();
        System.out.println("Scanner class:"+(i+j));
    }
}
