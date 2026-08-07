//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_054
//
//  Description       : This program accepts a number from the user
//                      and displays uppercase alphabets at odd
//                      positions and lowercase alphabets at
//                      even positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_054
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display uppercase
    //                     alphabets at odd positions and
    //                     lowercase alphabets at even
    //                     positions.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 07/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch1 = '\0';    // For Capital
        char ch2 = '\0';    // For Small

        for(iCnt = 1, ch1 = 'A', ch2 = 'a'; iCnt <= iNo; iCnt++, ch1++, ch2++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(ch2 + "\t");
            }
            else
            {
                System.out.print(ch1 + " \t");
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
//      5
//
//  Sample Output :
//      A    b    C    d    E
//
//////////////////////////////////////////////////////////////////