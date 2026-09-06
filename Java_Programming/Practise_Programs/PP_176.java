//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_176
//
//  Description       : This program accepts a number from the user
//                      and displays a hollow pyramid pattern using
//                      star (*) symbols.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public static void Display(int iNo)
    {
        int i, j, k = 0;

        for(i = 1; i <= iNo; i++)
        {
            for(j = i; j <= iNo; j++)
            {
                System.out.print(" ");
            }
            for(k = 1; k <=(2 * i - 1); k++)           
            {
                if(k == 1 || i == iNo || k == (2 * i - 1))
                {
                    System.out.print("*");
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

class PP_176
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number :
//      5
//
//  Sample Output :
//           *
//          * *
//         *   *
//        *     *
//       *********
//
//////////////////////////////////////////////////////////////////