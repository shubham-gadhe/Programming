//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_093
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      lowercase alphabets in a lower triangular
//                      pattern. Each row contains the same
//                      alphabet, starting from 'a'.
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
//  Description      : It is used to display lowercase alphabets
//                     in a lower triangular pattern. Each row
//                     contains the same alphabet, and the
//                     alphabet is incremented after every row.
//
//  Author           : Shubham Somanath Gadhe
//  Date             : 10/08/2026
//
//////////////////////////////////////////////////////////////////

    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0';

        // Filter for Diagonal Pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid Parameter");
            System.out.println("Number of rows and columns should be same.");
            return;
        }

        for(i = 1, ch = 'a'; i <= iRow; i++, ch++)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print(ch + "\t");
            }

            System.out.println();
        }
    }
}

class PP_093
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
//      4
//
//      Enter the number of Column :
//      4
//
//  Sample Output :
//
//      a
//      b    b
//      c    c    c
//      d    d    d    d
//
//////////////////////////////////////////////////////////////////