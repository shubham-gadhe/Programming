//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_158
//
//  Description       : This program accepts a number from the
//                      user and displays sequential numbers at
//                      odd positions and stars at even positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_158
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(((iCnt / 2) + 1) + "\t");
            }
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
//      1	*	2	*	3
//
//////////////////////////////////////////////////////////////////