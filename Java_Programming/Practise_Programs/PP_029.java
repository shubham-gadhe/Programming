//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_029
//
//  Description       : This program accepts a number from the user
//                      and counts the occurrence of digit 7 in
//                      the given number.
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
    //  Description      : It is used to count the occurrence of
    //                     digit 7 in the given number by extracting
    //                     each digit using modulus and division.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 10/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public int CountDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iNo == 7)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}

class PP_029
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
//      127737
//
//  Sample Output :
//      Number of Digits are : 1
//
//////////////////////////////////////////////////////////////////
