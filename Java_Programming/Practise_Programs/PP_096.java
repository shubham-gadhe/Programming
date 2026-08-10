//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_096
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      a lower triangular pattern using '*'
//                      on the diagonal and the last row, while
//                      blank spaces are displayed in the
//                      remaining positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/08/2026
//
//  Time Complexity   : O(n² / 2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
//////////////////////////////////////////////////////////////////
//
//  Function Name    : Display()
//
//  Description      : It is used to display a lower triangular
//                     pattern. '*' is displayed on the diagonal
//                     and the last row, while blank spaces are
//                     displayed in the remaining positions.
//
//  Author           : Shubham Somanath Gadhe
//  Date             : 10/08/2026
//
//////////////////////////////////////////////////////////////////

    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        // Filter for Diagonal Pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid Parameter");
            System.out.println("Number of rows and columns should be same.");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= i; j++)
            {
                if(j == i || i == iRow || i == j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(" \t");
                }
            }

            System.out.println();
        }
    }
}

class PP_096
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Column: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of Rows :
//      6
//
//      Enter the number of Column :
//      6
//
//  Sample Output :
//
//      *
//      *    *
//      *        *
//      *            *
//      *                *
//      *    *    *    *    *    *
//
//////////////////////////////////////////////////////////////////