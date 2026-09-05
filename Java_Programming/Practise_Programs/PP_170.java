//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_170
//
//  Description       : This program accepts the number of rows and
//                      columns and displays a pattern containing
//                      stars (*) on and below the main diagonal
//                      and hash (#) symbols above the diagonal.
//                      It also validates that rows and columns are equal.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
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
            for(j = 1; j <= iCol; j++)
            {
                if(i >= j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }            
            System.out.println();
        }  
}
}

class PP_170
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
//      Enter the number of Rows:
//      4
//      Enter the number of Column:
//      4
//
//  Sample Output :
//      *   #   #   #
//      *   *   #   #
//      *   *   *   #
//      *   *   *   *
//
//////////////////////////////////////////////////////////////////