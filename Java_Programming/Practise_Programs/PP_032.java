//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_032
//
//  Description       : This program accepts a number from the user
//                      and counts the number of even and odd digits
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
    //  Method Name      : CountEvenOddDigits()
    //
    //  Description      : It is used to count the number of even
    //                     and odd digits present in the given
    //                     number by extracting each digit and
    //                     checking whether it is even or odd.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 10/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public void CountEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCountEven = 0, iCountOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }

            iNo = iNo / 10;
        }

        System.out.println("Number of even digits : " + iCountEven);
        System.out.println("Number of odd digits : " + iCountOdd);
    }
}

class PP_032
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.CountEvenOddDigits(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter Number :
//      123456
//
//  Sample Output :
//      Number of even digits : 3
//      Number of odd digits : 3
//
//////////////////////////////////////////////////////////////////
