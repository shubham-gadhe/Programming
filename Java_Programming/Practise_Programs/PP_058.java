//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_058
//
//  Description       : This program displays a 4 x 4 pattern
//                      consisting of '*' symbols using
//                      nested loops.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/08/2026
//
//  Time Complexity   : O(r × c)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_058
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display a 4 x 4
    //                     pattern of '*' symbols using
    //                     nested loops.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 07/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display()
    {
        int i = 0, j = 0;

        for(i = 1; i <= 4; i++)
        {
            for(j = 1; j <= 4; j++)
            {
                System.out.print("*\t");
            }

            System.out.println();
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        //System.out.println("Enter the number of elements : ");
        //iValue = sobj.nextInt();

        Display();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Output :
//
//      *    *    *    *
//      *    *    *    *
//      *    *    *    *
//      *    *    *    *
//
//////////////////////////////////////////////////////////////////