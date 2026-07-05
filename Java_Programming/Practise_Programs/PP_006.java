//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_006
//
//  Description  : This program accepts a number from the user 
//                 and checks whether it is divisible by both
//                 3 and 5 using a user-defined method.
//
//  Example:
//      Input  : 15
//      Output : ERROR
//              (The error occurs because CheckDivisible() 
//               is a non-static (instance) method, while 
//               main() is a static method. A static method
//               cannot directly call a non-static method.)
//
//////////////////////////////////////////////////////////////////

// TYPE 2
import java.util.Scanner;

class PP_006
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5");
        }           
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt(); 
        
        CheckDivisible(iValue);     // Error
    }
}