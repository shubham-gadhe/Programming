//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_190
//
//  Description       : Accepts a number and displays its reverse.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/09/2026
//
//  Time Complexity   : O(log10(n))
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_190
{
    public static int ReverseNumber(int iNo)
    {
        int iDigit = 0, iRev = 0;

        while(iNo != 0)    
        {
            iDigit = iNo % 10;   
            iRev = (iRev * 10) + iDigit; 
            iNo = iNo / 10;  
        }

        return iRev;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = ReverseNumber(iValue);

        System.out.println("Reverse Number is : " + iRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number : 1234
//
//  Sample Output :
//      Reverse Number is : 4321
//
//////////////////////////////////////////////////////////////////