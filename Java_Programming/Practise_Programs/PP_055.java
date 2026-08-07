//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_055
//
//  Description       : This program accepts a number from the user
//                      and displays '*' and '#' in groups of
//                      three alternately.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_055
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display '*' and '#'
    //                     alternately in groups of three
    //                     for the specified number of elements.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 07/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(((iCnt - 1) / 3) % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print("#\t");
            }
        }

        System.out.println();
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      11
//
//  Sample Output :
//      *    *    *    #    #    #    *    *    *    #    #
//
//////////////////////////////////////////////////////////////////