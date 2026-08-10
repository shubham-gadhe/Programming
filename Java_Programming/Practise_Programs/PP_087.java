//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_087
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      '@' on the main diagonal and '%' below
//                      the main diagonal.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/08/2026
//
//  Time Complexity   : O(r × c)
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
//  Description      : It is used to display '@' on the
//                     main diagonal and '%' below the
//                     main diagonal.
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
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("@\t");
                }
                else if(i > j)
                {
                    System.out.print("%\t");
                }
            }

            System.out.println();
        }
    }
}

class PP_087
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
//      @
//      %    @
//      %    %    @
//      %    %    %    @
//
//////////////////////////////////////////////////////////////////