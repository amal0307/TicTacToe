import java.util.Scanner;
class currency
{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int converted;
        System.out.println("Enter amount in rupees");
        int rupee=input.nextInt();
        System.out.println("Enter choice to which currency to convert");
        System.out.println("1.Dollars\n2.Pound\n3.Euro");
        int choice=input.nextInt();
        switch(choice)
        {
            case 1:
            converted=rupee/80;
            System.out.println(rupee+"Rs. is equivalent to "+converted+" dollars");
            break;

            case 2:
            converted=rupee/100;
            System.out.println(rupee+"Rs. is equivalent to "+converted+" pounds");
            break;

            case 3:
            converted=rupee/90;
            System.out.println(rupee+"Rs. is equivalent to "+converted+" Euros");
            break;

            default:
            System.out.println("Invalid choice");
            break;
        }
    }
}