import java.util.Scanner;
public class A3i
{
    public static void main(String[] args)
    {
        System.out.print("Command line argument:"+(a[0]+a[1]));
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no 1:");
        int i=sc.nextInt();
        System.out.println("Enter no 2:");
        int j=sc.nextInt();
        System.out.println("Scanner class add:"+(i+j));
    }
}