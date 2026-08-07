//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_053
//
//  Description       : This program accepts a number from the user
//                      and displays uppercase alphabets at odd
//                      positions and position numbers at even
//                      positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_053
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display uppercase
    //                     alphabets at odd positions and
    //                     even position numbers at
    //                     even positions.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 07/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(iCnt + "\t");
            }
            else
            {
                System.out.print(ch + " \t");
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
//      A    2    C    4    E
//
//////////////////////////////////////////////////////////////////