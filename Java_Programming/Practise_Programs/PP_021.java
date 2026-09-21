//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_021
//
//  Description       : This program accepts a number from the user
//                      and checks whether the number is prime or not
//                      using a boolean flag.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class NumberX
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CheckPrime()
    //
    //  Description      : It is used to check whether the given
    //                     number is prime or not using a boolean
    //                     flag and checking its divisibility
    //                     from 2 up to half of the given number.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 09/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = true;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
        }

        return bFlag;
    }
}

class PP_021
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        bRet = nobj.CheckPrime(iValue);

        if(bRet == true)
        {
            System.out.println("It is prime");
        }
        else
        {
            System.out.println("It is not prime");
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter number :
//      17
//
//  Sample Output :
//      It is prime
//
//////////////////////////////////////////////////////////////////
