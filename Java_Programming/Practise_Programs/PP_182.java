//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_182
//
//  Description       : This program accepts three numbers from the
//                      user and finds the smallest among them.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_182
{
    public static int FindSmall(int iNo1, int iNo2, int iNo3)
    {
        if(iNo1 < iNo2 && iNo1 < iNo3)
        {
            return iNo1;
        }
        else if(iNo2 < iNo1 && iNo2 < iNo3)
        {
            return iNo2;
        }
        else 
        {
            return iNo3;
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

        System.out.println("Enter the First Number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Second Number : ");
        iValue2 = sobj.nextInt();

        System.out.println("Enter the Third Number : ");
        iValue3 = sobj.nextInt();

        iRet = FindSmall(iValue1, iValue2, iValue3);

        System.out.println("Smallest Number is : " + iRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the First Number :
//      25
//      Enter the Second Number :
//      78
//      Enter the Third Number :
//      42
//
//  Sample Output :
//      Smallest Number is : 25
//
//////////////////////////////////////////////////////////////////