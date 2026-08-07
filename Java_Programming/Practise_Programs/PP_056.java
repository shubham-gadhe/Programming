//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_056
//
//  Description       : This program displays two rows, each
//                      containing four '*' symbols.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_056
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display two rows,
    //                     each containing four '*' symbols.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 07/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        //System.out.println("Enter the number of elements : ");
        //iValue = sobj.nextInt();

        Display();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Output :
//
//      *    *    *    *
//      *    *    *    *
//
//////////////////////////////////////////////////////////////////