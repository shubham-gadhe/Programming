//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_047
//
//  Description       : This program accepts a number from the user
//                      and displays lowercase alphabets starting
//                      from 'a' using the for loop initialization
//                      and increment section.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_047
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display lowercase
    //                     alphabets starting from 'a'
    //                     by initializing and incrementing
    //                     the character variable in the for loop.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 06/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
        {
            System.out.print(ch + "\t");
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
//      a    b    c    d    e
//
//////////////////////////////////////////////////////////////////