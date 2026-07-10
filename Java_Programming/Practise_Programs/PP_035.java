/*
==============================================================================
 Program     : Calculate Sum of Even Digits

 Description : Reads an integer from the user and calculates the sum of all
               even digits present in the specified number.

 Author      : Shubham Gadhe
==============================================================================
*/

import java.util.Scanner;

/*
==============================================================================
 Class       : DigitX

 Description : Provides utility methods for performing operations on digits.
==============================================================================
*/
class DigitX
{
    /*
    ==============================================================================
     Function    : SumEvenDigits

     Description : Calculates and returns the sum of all even digits present
                   in the specified number.

     Parameters  : iNo - Number whose digits are to be processed.

     Returns     : Sum of all even digits present in the specified number.

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */
    public int SumEvenDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

         while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iSum = iSum + iDigit;
            }                         
            iNo = iNo / 10;      
        }  

        return iSum;
    }
}

class PP_035
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SumEvenDigits(iValue);    

        System.out.println("Summation Even of Digits: " + iRet);
    }
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 864257

 Sample Output
------------------------------------------------------------------------------
 Summation Even of Digits : 12
==============================================================================
*/