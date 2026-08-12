//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_101
//
//  Description       : This program accepts the number of elements
//                      and elements of an array from the user and
//                      displays all elements of the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_101
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Enter the number of elements: ");
        int iLength = sobj.nextInt();

        int Brr[] = new int[iLength];

        System.out.println("Enter the elements: ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt] = sobj.nextInt());
        }

        System.out.println("Elements of the Array are: ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of elements:
//      5
//
//      Enter the elements:
//      10
//      20
//      30
//      40
//      50
//
//  Sample Output :
//
//      Enter the number of elements:
//      5
//
//      Enter the elements:
//      10
//      20
//      30
//      40
//      50
//
//      Elements of the Array are:
//      10
//      20
//      30
//      40
//      50
//
//////////////////////////////////////////////////////////////////