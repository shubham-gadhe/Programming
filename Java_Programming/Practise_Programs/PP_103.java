//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_103
//
//  Description       : This program accepts the elements of an
//                      array from the user and calculates the
//                      summation of all elements using a function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_103
{
//////////////////////////////////////////////////////////////////
//
//  Function Name     : Summation()
//
//  Description       : It is used to calculate and return the
//                      summation of all elements of an array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/08/2026
//
//////////////////////////////////////////////////////////////////

    public static int Summation(int Arr[])
    {
        int iSum = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }

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
            Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the Array are: ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        int iRet = Summation(Brr);

        System.out.println("Summation is : " + iRet);

        Brr = null;

        System.gc();
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
//      Summation is : 150
//
//////////////////////////////////////////////////////////////////