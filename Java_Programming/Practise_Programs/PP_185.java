//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_185
//
//  Description       : This program swaps two numbers using a
//                      third variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_185
{
    public static void Swap(int iNo1, int iNo2)
    {
        int temp = 0;

        System.out.println("Before Swap First Number is : " + iNo1);
        System.out.println("Before Swap Second Number is : " + iNo2);

        temp = iNo1;        
        iNo1 = iNo2;        
        iNo2 = temp;        

        System.out.println("After Swap First Number is : " + iNo1);
        System.out.println("After Swap Second Number is : " + iNo2);        
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iRet = 0;

        System.out.println("Enter the First Number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Second Number : ");
        iValue2 = sobj.nextInt();

        Swap(iValue1, iValue2);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the First Number :
//      10
//      Enter the Second Number :
//      20
//
//  Sample Output :
//      Before Swap First Number is : 10
//      Before Swap Second Number is : 20
//      After Swap First Number is : 20
//      After Swap Second Number is : 10
//
//////////////////////////////////////////////////////////////////