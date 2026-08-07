//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_061
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      the row number repeatedly in each row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/08/2026
//
//  Time Complexity   : O(r × c)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_061
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display the current
    //                     row number repeatedly for the
    //                     specified number of columns.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 07/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i + "\t");
            }

            System.out.println();
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        iValue2 = sobj.nextInt();

        Display(iValue1, iValue2);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter the number of Rows :
//      4
//
//      Enter the number of Columns :
//      4
//
//  Sample Output :
//
//      1    1    1    1
//      2    2    2    2
//      3    3    3    3
//      4    4    4    4
//
//////////////////////////////////////////////////////////////////