//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_161
//
//  Description       : This program accepts a number from the
//                      user and displays a pattern of stars and
//                      hash symbols. Three consecutive positions
//                      display a star followed by three positions
//                      displaying a hash symbol.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_161
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(((iCnt - 1) / 3) % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print("#\t");
            }
        }

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
//      Enter the elements : 10
//
//  Sample Output :
//
//      *	*	*	#	#	#	*	*	*	#
//
//////////////////////////////////////////////////////////////////