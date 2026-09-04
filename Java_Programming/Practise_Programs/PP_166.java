//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_166
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      a number pattern where each row contains
//                      the same number, decreasing from the
//                      number of rows to 1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/09/2026
//
//  Time Complexity   : O(n * m)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public static void Display(int iRow, int iCol)
    {
        int i, j = 0;
        int iCount = 0;

        for(i = 1, iCount = iRow; i <= iRow; i++, iCount--)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(iCount + "\t");
            }
            System.out.println();
        }
    }
}

class PP_166
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1, iValue2 = 0;

        System.out.println("Enter the number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of Rows : 4
//      Enter the number of Columns : 5
//
//  Sample Output :
//
//      4	4	4	4	4
//      3	3	3	3	3
//      2	2	2	2	2
//      1	1	1	1	1
//
//////////////////////////////////////////////////////////////////