//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_100
//
//  Description       : This program demonstrates the error caused
//                      by placing a semicolon after the for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_100
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {10,20,30,40,50};

        // Bad Programming Practise
        for(int iCnt = 0; iCnt < Arr.length; iCnt++); 
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println(iCnt);   // Error
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      Compilation Error
//
//////////////////////////////////////////////////////////////////