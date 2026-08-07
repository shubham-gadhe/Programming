//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_063
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      '#' in odd columns and '&' in even columns.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/08/2026
//
//  Time Complexity   : O(r × c)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_063
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display '#' in odd
    //                     numbered columns and '&' in even
    //                     numbered columns for the specified
    //                     number of rows.
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
                if(j % 2 == 0)
                {
                    System.out.print("&\t");
                }
                else
                {
                    System.out.print("#\t");
                }
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
//      #    &    #    &
//      #    &    #    &
//      #    &    #    &
//      #    &    #    &
//
//////////////////////////////////////////////////////////////////