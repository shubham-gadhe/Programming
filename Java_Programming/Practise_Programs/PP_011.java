//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_011
//
//  Description  : This program accepts a number from the user
//                 and checks whether it is divisible by both 
//                 3 and 5 using a separate class and 
//                 a non-static method.
//
//  Example:
//      Input  : 15
//      Output : Number is divisible by 3 and 5
//
//////////////////////////////////////////////////////////////////

// TYPE 3
import java.util.Scanner;

class NumberX
{
    public boolean CheckDivisible(int iNo)
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
}

class PP_011
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;


        System.out.println("Enter number : ");
        iValue = sobj.nextInt(); 
        
        NumberX nobj = new NumberX();
        
        bRet = nobj.CheckDivisible(iValue);   
        
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