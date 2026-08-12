//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_097
//
//  Description       : This program demonstrates array length
//                      and accesses array elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_097
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {10,20,30,40,50};

        System.out.println(Arr.length); //new

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);
        System.out.println(Arr[4]);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      5
//      10
//      20
//      30
//      40
//      50
//
//////////////////////////////////////////////////////////////////