//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_152
//
//  Description       : This program accepts a number from the
//                      user and displays numbers from 1 up to
//                      the given number using a loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_152
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt + "\t");
        }
        System.out.println();
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the elements : 5
//
//  Sample Output :
//
//      1	2	3	4	5
//
//////////////////////////////////////////////////////////////////