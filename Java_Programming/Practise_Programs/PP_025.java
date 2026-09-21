//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_025
//
//  Description       : This program accepts a number from the user
//                      and displays each digit of the number
//                      separately using a for loop without
//                      initialization section.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/07/2026
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
    //  Method Name      : DisplayDigits()
    //
    //  Description      : It is used to extract and display each
    //                     digit of the given number using the
    //                     modulus and division operations inside
    //                     a for loop.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 09/07/2026
    //
    //////////////////////////////////////////////////////////////////

    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        for(; iNo != 0; iNo = iNo / 10)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
        }
    }
}

class PP_025
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter Number :
//      12345
//
//  Sample Output :
//      5
//      4
//      3
//      2
//      1
//
//////////////////////////////////////////////////////////////////
