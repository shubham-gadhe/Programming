//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_169
//
//  Description       : This program displays a butterfly pattern
//                      using stars and spaces.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/09/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

class PP_169
{
    public static void main(String args[])
    {
        for(int i = 1; i <= 5; i++)  //First height
        {
            for(int j = 1; j <= i; j++)  //First star
            {
                System.out.print("*");
            }
            for(int j = 1; j <= (5-i) * 2; j++)  //space
            {
                System.out.print(" ");
            }
            for(int j = 1; j <= i; j++)  //Second Star
            {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i = 1; i <= 4; i++)  //height
        {
            for(int j = 1; j <= 5 - i; j++)  //First Star
            {
                System.out.print("*"); 
            }
            for(int j = 1; j <= i * 2; j++)  //space
            {
                System.out.print(" ");
            }
            for(int j = 1; j <= 5 - i; j++)  //Second Star
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
//  *        *
//  **      **
//  ***    ***
//  ****  ****
//  **********
//  ****  ****
//  ***    ***
//  **      **
//  *        *
//
//////////////////////////////////////////////////////////////////