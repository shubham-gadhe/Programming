//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_168
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      a pattern using hash symbols in the first
//                      and last rows and stars in the remaining
//                      rows.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/09/2026
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

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == 1 || i == iRow)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}
class PP_168
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1, iValue2 = 0;

        System.out.println("Enter the Number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number of Rows : 4
//      Enter the Number of Columns : 5
//
//  Sample Output :
//
//      #	#	#	#	#
//      *	*	*	*	*
//      *	*	*	*	*
//      #	#	#	#	#
//
//////////////////////////////////////////////////////////////////