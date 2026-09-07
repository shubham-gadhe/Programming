//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_184
//
//  Description       : This program demonstrates swapping two numbers
//                      without using a third variable by using
//                      multiplication and division.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_184
{
    public static void SwapNum(int iNo1, int iNo2)
    {
        System.out.println("Before Swap First Number is : " + iNo1);
        System.out.println("Before Swap Second Number is : " + iNo2);

        iNo1 = iNo1 * iNo2;
        iNo2 = iNo1 / iNo2;
        iNo1 = iNo1 / iNo2;

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
//      No output is produced because SwapNum() is not called
//      from the main() method.
//
//////////////////////////////////////////////////////////////////