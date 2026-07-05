//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_009
//
//  Description  : This program accepts a number from the user 
//                 and checks whether it is divisible by both
//                 3 and 5 using a method that returns a
//                 boolean value.
//
//  Example:
//      Input  : 15
//      Output : Number is divisible by 3 and 5
//
//////////////////////////////////////////////////////////////////

// TYPE 2
import java.util.Scanner;

class PP_009
{
    public static boolean CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }           
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;


        System.out.println("Enter number : ");
        iValue = sobj.nextInt(); 
        
        bRet = CheckDivisible(iValue);   
        
        if(bRet == true)
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5");
        }
    }
}