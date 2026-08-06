//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_044
//
//  Description       : This program accepts a number from the user
//                      and displays consecutive numbers at odd
//                      positions while displaying '*' at even
//                      positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_044
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display consecutive
    //                     numbers at odd positions and
    //                     '*' at even positions.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 06/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display(int iNo)
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 1, iCount = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCount + "\t");
                iCount++;
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