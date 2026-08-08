//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_073
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      lowercase alphabets in odd rows and
//                      column numbers in even rows.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/08/2026
//
//  Time Complexity   : O(r × c)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : Display()
    //
    //  Description      : It is used to display lowercase
    //                     alphabets in odd-numbered rows
    //                     and column numbers in even-
    //                     numbered rows.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 08/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(j + "\t");
                }
                else
                {
                    System.out.print(ch + "\t");
                }
            }

            System.out.println();
        }
    }
}

class PP_073
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Column: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter the number of Rows :
//      4
//
//      Enter the number of Column :
//      4
//
//  Sample Output :
//
//      a    b    c    d
//      1    2    3    4
//      a    b    c    d
//      1    2    3    4
//
//////////////////////////////////////////////////////////////////