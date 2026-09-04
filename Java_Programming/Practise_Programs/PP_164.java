//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_164
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      a pattern of stars and dollar symbols.
//                      Odd columns contain stars and even columns
//                      contain dollar symbols.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/09/2026
//
//  Time Complexity   : O(n * m)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_164
{
    public static void Display(int iRow, int iCol)
    {
        int i, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j % 2 == 0)
                {
                    System.out.print("$\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1, iValue2 = 0;

        System.out.println("Enter the number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Rows : ");
        iValue2 = sobj.nextInt();

        Display(iValue1, iValue2);        
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of Rows : 4
//      Enter the number of Rows : 5
//
//  Sample Output :
//
//      *	$	*	$	*
//      *	$	*	$	*
//      *	$	*	$	*
//      *	$	*	$	*
//
//////////////////////////////////////////////////////////////////