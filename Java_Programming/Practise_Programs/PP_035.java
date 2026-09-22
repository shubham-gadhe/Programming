//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_035
//
//  Description       : This program accepts a number from the user
//                      and calculates the sum of all even digits
//                      present in the given number.
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
    //  Method Name      : SumEvenDigits()
    //
    //  Description      : It is used to calculate the sum of all
    //                     even digits present in the given number
    //                     by extracting each digit and checking
    //                     whether it is even.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 10/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public int SumEvenDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iSum = iSum + iDigit;
            }

            iNo = iNo / 10;
        }

        return iSum;
    }
}

class PP_035
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SumEvenDigits(iValue);

        System.out.println("Summation Even of Digits: " + iRet);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter Number :
//      123456
//
//  Sample Output :
//      Summation Even of Digits: 12
//
//////////////////////////////////////////////////////////////////
