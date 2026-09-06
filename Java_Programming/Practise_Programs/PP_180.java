//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_180
//
//  Description       : This program finds the absolute value of a
//                      given number without using a library function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_180
{
    public static int AbsoluteValue(int iNo)
    {
        if(iNo < 0)
        {
            return -iNo;            
        }

        return iNo;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = AbsoluteValue(iValue);

        System.out.println("Absolute Value is : " + iRet);

        sobj.close();
    }

}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number :
//      -25
//
//  Sample Output :
//      Absolute Value is : 25
//
//////////////////////////////////////////////////////////////////