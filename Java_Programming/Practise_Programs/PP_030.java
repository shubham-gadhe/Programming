//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_030
//
//  Description       : This program accepts a number from the user
//                      and counts the number of even digits present
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
    //  Method Name      : CountEvenDigits()
    //
    //  Description      : It is used to count the number of even
    //                     digits present in the given number by
    //                     extracting each digit and checking
    //                     whether it is even.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 10/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public int CountEvenDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}

class PP_030
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.CountEvenDigits(iValue);

        System.out.println("Number of Even Digits are : " + iRet);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter Number :
//      123456
//
//  Sample Output :
//      Number of Even Digits are : 3
//
//////////////////////////////////////////////////////////////////
