//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_072
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      lowercase alphabets starting from the
//                      ASCII value 97 in each row.
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
    //                     alphabets by initializing the
    //                     character variable with ASCII
    //                     value 97 for each row.
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
            for(j = 1, ch = 97; j <= iCol; j++, ch++)
            {
                System.out.print(ch + "\t");
            }

            System.out.println();
        }
    }
}

class PP_072
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
//      a    b    c    d
//      a    b    c    d
//      a    b    c    d
//
//////////////////////////////////////////////////////////////////