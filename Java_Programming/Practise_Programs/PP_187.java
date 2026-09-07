//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_187
//
//  Description       : This program accepts a number from the user
//                      and counts the number of digits present in
//                      the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/09/2026
//
//  Time Complexity   : O(log10(n))
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_187
{
    public static int CountDigit(int iNo)
    {
        int iDigit = 0, iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iCount++;

            iNo = iNo / 10;
        }

        return iCount;        
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter the First Number : ");
        iValue = sobj.nextInt();

        iRet = CountDigit(iValue);

        System.out.println("Digits in the Number is : " + iRet);      

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the First Number :
//      12345
//
//  Sample Output :
//      Digits in the Number is : 5
//
//////////////////////////////////////////////////////////////////