//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_137
//
//  Description       : This program prints a butterfly star pattern
//                      using nested for loops. The pattern consists
//                      of two symmetrical halves with stars and
//                      spaces.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/08/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_137
{
    public static void main(String args[])
    {
        for(int i = 1; i <= 5; i++)              
        {
            for(int j = 1; j <= i; j++)          
            {
                System.out.print("*");
            }

            for(int j = 1; j <= (5 - i) * 2; j++) 
            {
                System.out.print(" ");
            }

            for(int j = 1; j <= i; j++)          
            {
                System.out.print("*");
            }

            System.out.println();
        }

        for(int i = 1; i <= 4; i++)              
        {
            for(int j = 1; j <= 5 - i; j++)      
            {
                System.out.print("*");
            }

            for(int j = 1; j <= i * 2; j++)      
            {
                System.out.print(" ");
            }

            for(int j = 1; j <= 5 - i; j++)      
            {
                System.out.print("*");
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
//      *        *
//      **      **
//      ***    ***
//      ****  ****
//      **********
//      ****  ****
//      ***    ***
//      **      **
//      *        *
//
//////////////////////////////////////////////////////////////////