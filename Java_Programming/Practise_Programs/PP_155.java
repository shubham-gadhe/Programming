//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_155
//
//  Description       : This program accepts a number from the
//                      user and displays a pattern of stars and
//                      hash symbols based on the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_155
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t#\t");
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
//      *	#	*	#	*	#	*	#	*	#
//
//////////////////////////////////////////////////////////////////