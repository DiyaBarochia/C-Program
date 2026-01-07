import java.util.Scanner;
public class C6
{
    public static void main(String[] a)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a character:");
        char ch=sc.next().charAt(0);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            System.out.println("It's vowel");
        }
        else
        {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            System.out.println("It's vowel");
        }
        else
        {
            System.out.println("It's consonant");
        }
        }
    }
}
