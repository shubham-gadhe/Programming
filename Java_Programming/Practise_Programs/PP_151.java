//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_151
//
//  Description       : This program accepts a number from the
//                      user and displays stars using a loop.
//                      The number of stars displayed depends
//                      on the value entered by the user.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;


class PP_151
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
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
//      *	*	*	*	*	*
//
//////////////////////////////////////////////////////////////////