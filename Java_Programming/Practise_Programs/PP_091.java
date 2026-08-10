//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_091
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      numbers in a lower triangular pattern,
//                      where each row starts from 1 and ends
//                      with the current row number.
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
//  Description      : It is used to display numbers in a lower
//                     triangular pattern. Each row starts from
//                     1 and prints numbers up to the current
//                     row number.
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
                System.out.print(j + "\t");
            }

            System.out.println();
        }
    }
}

class PP_091
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
//      1
//      1    2
//      1    2    3
//      1    2    3    4
//
//////////////////////////////////////////////////////////////////