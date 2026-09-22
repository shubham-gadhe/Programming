//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_028
//
//  Description       : This program accepts a number from the user
//                      and counts the number of digits present
//                      in the given number using a while loop.
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
    //  Method Name      : CountDigits()
    //
    //  Description      : It is used to count the number of digits
    //                     present in the given number by repeatedly
    //                     dividing the number by 10.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 10/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public int CountDigits(int iNo)
    {
        int iCount = 0;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        return iCount;
    }
}

class PP_028
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.CountDigits(iValue);

        System.out.println("Number of Digits are : " + iRet);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter Number :
//      12345
//
//  Sample Output :
//      Number of Digits are : 5
//
//////////////////////////////////////////////////////////////////
