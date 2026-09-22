//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_033
//
//  Description       : This program accepts a number from the user
//                      and calculates the sum of all digits present
//                      in the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class DigitX
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : SumDigits()
    //
    //  Description      : It is used to calculate the sum of all
    //                     digits present in the given number by
    //                     extracting each digit and adding it
    //                     to the sum.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 10/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        return iSum;
    }
}

class PP_033
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SumDigits(iValue);

        System.out.println("Summation of Digits: " + iRet);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter Number :
//      12345
//
//  Sample Output :
//      Summation of Digits: 15
//
//////////////////////////////////////////////////////////////////
