//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_082
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and is intended
//                      to display '%' on the border of the matrix,
//                      leaving the inner area blank.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/08/2026
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
    //  Description      : It is intended to display '%' on
    //                     the boundary of the matrix.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 09/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == 1 || i == iRow || j == 1 || j == iCol)
                {
                    System.out.print("%\t");
                }

                System.out.println();
            }
        }
    }
}

class PP_082
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
//  Expected Sample Input :
//      Enter the number of Rows :
//      6
//
//      Enter the number of Column :
//      6
//
//  Expected Sample Output :
//
//      %    %    %    %    %    %
//      %                   %
//      %                   %
//      %                   %
//      %                   %
//      %    %    %    %    %    %
//
//////////////////////////////////////////////////////////////////