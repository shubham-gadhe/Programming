//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_040
//
//  Description       : This program accepts a number from the user
//                      and displays numbers from 1 to the given
//                      number, with '*' printed after each number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_040
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display numbers
    //                     from 1 to the specified number,
    //                     followed by '*' after each number.
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
            System.out.print(iCnt + "\t" + "*" + "\t");
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
//      1    *    2    *    3    *    4    *    5    *
//
//////////////////////////////////////////////////////////////////