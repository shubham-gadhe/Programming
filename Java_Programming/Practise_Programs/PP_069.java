//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_069
//
//  Description       : This program accepts the number of rows
//                      and columns from the user and displays
//                      '$' in odd rows and '#' in even rows
//                      using a character array.
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
    //  Description      : It is used to display '$' in odd
    //                     numbered rows and '#' in even
    //                     numbered rows by selecting the
    //                     character from an array.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 08/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char Arr[] = {'#', '$'};

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(Arr[i % 2] + "\t");
            }

            System.out.println();
        }
    }
}

class PP_069
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
//      $    $    $    $
//      #    #    #    #
//      $    $    $    $
//      #    #    #    #
//
//////////////////////////////////////////////////////////////////