//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_160
//
//  Description       : This program accepts a number from the
//                      user and displays lowercase alphabets
//                      at odd positions and a star at even
//                      positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;


class PP_160
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(ch + "\t");
                ch++;
            }            
        }
        System.out.println();
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the elements : 5
//
//  Sample Output :
//
//      a	*	b	*	c
//
//////////////////////////////////////////////////////////////////