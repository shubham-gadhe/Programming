//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_031
//
//  Description       : This program accepts a number from the user
//                      and counts the number of odd digits present
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
    //  Method Name      : CountOddDigits()
    //
    //  Description      : It is used to count the number of odd
    //                     digits present in the given number by
    //                     extracting each digit and checking
    //                     whether it is odd.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 10/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public int CountOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 != 0)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}

class PP_031
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.CountOddDigits(iValue);

        System.out.println("Number of Odd Digits are : " + iRet);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter Number :
//      123456
//
//  Sample Output :
//      Number of Odd Digits are : 3
//
//////////////////////////////////////////////////////////////////
