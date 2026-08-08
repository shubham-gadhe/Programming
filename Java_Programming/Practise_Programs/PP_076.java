//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_076
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      the '@' symbol at all positions except
//                      the reverse diagonal, where it displays
//                      the '$' symbol.
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
    //  Description      : It is used to display '@' at every
    //                     position and '$' at the reverse
    //                     diagonal positions of the matrix.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 08/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)      // Diagonal
                {
                    System.out.print("$\t");
                }
                else
                {
                    System.out.print("@\t");
                }
            }

            System.out.println();
        }
    }
}

class PP_076
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
//      @    @    @    $
//      @    @    $    @
//      @    $    @    @
//      $    @    @    @
//
//////////////////////////////////////////////////////////////////