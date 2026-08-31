//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_140
//
//  Description       : This program prints a decreasing star
//                      pattern using nested for loops. The number
//                      of stars decreases by one in each row.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/08/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_140
{
    public static void main(String args[])
    {
        for(int i = 1; i <= 5; i++)
        {
            for(int j = 1; j <= 6 - i; j++)
            {
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      * * * * *
//      * * * *
//      * * *
//      * *
//      *
//
//////////////////////////////////////////////////////////////////