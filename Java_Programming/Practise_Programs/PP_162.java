//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_162
//
//  Description       : This program accepts a number from the
//                      user and displays a square pattern of
//                      stars. The number of rows and columns
//                      is determined by the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_162
{
    public static void Display(int iNo)
    {
        int i , j = 0;

        for(i = 1; i <= iNo; i++)
        {
            for(j = 1; j <= iNo; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
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
//      Enter the elements : 5
//
//  Sample Output :
//
//      *	*	*	*	*
//      *	*	*	*	*
//      *	*	*	*	*
//      *	*	*	*	*
//      *	*	*	*	*
//
//////////////////////////////////////////////////////////////////