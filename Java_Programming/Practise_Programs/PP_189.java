//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_189
//
//  Description       : This program accepts a number from the user
//                      and calculates the product of all digits
//                      present in the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/09/2026
//
//  Time Complexity   : O(log10(n))
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class PP_189
{
    public static int SumOfProduct(int iNo)
    {
        int iProduct = 1, iDigit = 0;  

        while(iNo != 0)
        {
            iDigit = iNo % 10;    
            iProduct = iProduct * iDigit;
            iNo = iNo / 10;
        }

        return iProduct;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter the First Number : ");
        iValue = sobj.nextInt();

        iRet = SumOfProduct(iValue);

        System.out.println("Product of all Digits : " + iRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the First Number :
//      12345
//
//  Sample Output :
//      Product of all Digits : 120
//
//////////////////////////////////////////////////////////////////