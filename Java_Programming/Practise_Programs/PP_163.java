//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_163
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      column numbers in each row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/09/2026
//
//  Time Complexity   : O(n * m)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_163
{
    public static void Display(int iRow, int iCol)
    {
        int i, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(j + "\t");
            }
            System.out.println();
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 , iValue2 = 0;

        System.out.println("Enter the number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        iValue2 = sobj.nextInt();

        Display(iValue1, iValue2);
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
//      1	2	3	4	5
//      1	2	3	4	5
//      1	2	3	4	5
//      1	2	3	4	5
//
//////////////////////////////////////////////////////////////////