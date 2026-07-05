//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_005
//
//  Description  : This program accepts a number from the user 
//                 and checks whether it is divisible by 
//                 both 3 and 5.
//
//  Example:
//      Input  : 15
//      Output : Number is divisible by 3 and 5
//
//////////////////////////////////////////////////////////////////

// TYPE 1
import java.util.Scanner;

class PP_005
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        if((iValue % 3 == 0) && (iValue % 5 == 0))
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5");
        }        
    }
}