//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_167
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      a diagonal star pattern using nested
//                      for loops.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/09/2026
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

        for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("* \t");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("* \t");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

class PP_167
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1, iValue2 = 0;

        System.out.println("Enter the number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the numbe of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of Rows : 5
//      Enter the number of Columns : 5
//
//  Sample Output :
//
//      *    
//       *   
//        *  
//         * 
//          *
//          *
//         *  
//        *   
//       *    
//      *     
//
//////////////////////////////////////////////////////////////////