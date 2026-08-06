//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_036
//
//  Description       : This program accepts a number from the user
//                      and reverses the digits of the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/08/2026
//
//  Time Complexity   : O(d)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class DigitX
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : ReverseNumber()
    //
    //  Description      : It is used to reverse the digits
    //                     of the given number and returns
    //                     the reversed number.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 06/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public int ReverseNumber(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }

        return iRev;
    }
}

class PP_036
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.ReverseNumber(iValue);

        System.out.println("Reverse Number is : " + iRet);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      751
//
//  Sample Output :
//      Reverse Number is : 157
//
//////////////////////////////////////////////////////////////////