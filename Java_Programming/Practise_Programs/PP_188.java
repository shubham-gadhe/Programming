//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_188
//
//  Description       : This program accepts a number from the user
//                      and calculates the sum of all digits present
//                      in the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/09/2026
//
//  Time Complexity   : O(log10(n))
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_188
{
    public static int SumOfDigits(int iNo)
    {
        int iDigit = 0, iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        return iSum;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iRet = 0;

        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();

        iRet = SumOfDigits(iValue1);

        System.out.println("Sum of Digits is : " + iRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number :
//      12345
//
//  Sample Output :
//      Sum of Digits is : 15
//
//////////////////////////////////////////////////////////////////