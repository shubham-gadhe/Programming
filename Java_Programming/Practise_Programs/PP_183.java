//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_183
//
//  Description       : This program swaps two numbers without using
//                      a third variable by using addition and subtraction.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_183
{
    public static void SwapNum(int iNo1, int iNo2)
    {
        int temp = 0;

        System.out.println("Before Swap First Number is : " + iNo1);
        System.out.println("Before Swap Second Number is : " + iNo2);

        iNo1 = iNo1 + iNo2;
        iNo2 = iNo1 - iNo2;
        iNo1 = iNo1 - iNo2;

        System.out.println("After Swap First Number is : " + iNo1);
        System.out.println("After Swap Second Number is : " + iNo2);
        
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iRet = 0;

        System.out.println("Enter the First Number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Second Number : ");
        iValue2 = sobj.nextInt();

        SwapNum(iValue1, iValue2);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the First Number :
//      10
//      Enter the Second Number :
//      20
//
//  Sample Output :
//      Before Swap First Number is : 10
//      Before Swap Second Number is : 20
//      After Swap First Number is : 20
//      After Swap Second Number is : 10
//
//////////////////////////////////////////////////////////////////