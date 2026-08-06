//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_037
//
//  Description       : This program accepts a number from the user
//                      and checks whether the given number
//                      is a palindrome or not.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/08/2026
//
//  Time Complexity   : O(d)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class DigitX
{
    //////////////////////////////////////////////////////////////////
    //
    //  Function Name    : CheckPallindrome()
    //
    //  Description      : It is used to check whether
    //                     the given number is a palindrome
    //                     and returns true if it is,
    //                     otherwise returns false.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 06/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public boolean CheckPallindrome(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }

        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class PP_037
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        bRet = dobj.CheckPallindrome(iValue);

        if(bRet == true)
        {
            System.out.println("Number is Pallindrome");
        }
        else
        {
            System.out.println("Number is not Pallindrome");
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      121
//
//  Sample Output :
//      Number is Pallindrome
//
//////////////////////////////////////////////////////////////////