//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_045
//
//  Description       : This program accepts a number from the user
//                      and displays consecutive numbers at odd
//                      positions while displaying '*' at even
//                      positions using a mathematical formula.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_045
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display consecutive
    //                     numbers at odd positions and
    //                     '*' at even positions using
    //                     the expression ((iCnt / 2) + 1).
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 06/08/2026
    //
    //////////////////////////////////////////////////////////////////

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

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      5
//
//  Sample Output :
//      1    *    2    *    3
//
//////////////////////////////////////////////////////////////////