/*
==============================================================================
 Program     : Calculate Sum of Digits

 Description : Reads an integer from the user and calculates the sum of all
               digits present in the specified number.

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
     Function    : SumDigits

     Description : Calculates and returns the sum of all digits present in the
                   specified number.

     Parameters  : iNo - Number whose digits are to be processed.

     Returns     : Sum of all digits present in the specified number.

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */
    public int SumDigits(int iNo)
    {
        int iSum = 0;

         while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);             
            iNo = iNo / 10;      
        }  

        return iSum;
    }
}

class PP_034
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SumDigits(iValue);    

        System.out.println("Summation of Digits: " + iRet);
    }
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 751

 Sample Output
------------------------------------------------------------------------------
 Summation of Digits : 13
==============================================================================
*/