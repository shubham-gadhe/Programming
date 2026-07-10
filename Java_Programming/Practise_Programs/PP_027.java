/*
==============================================================================
 Program     : Count Digits of a Number

 Description : Reads an integer from the user and counts the number of digits
               present in the specified number.

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
     Function    : CountDigits

     Description : Counts the number of digits present in the specified
                   number.

     Parameters  : iNo - Number whose digits are to be counted.

     Returns     : Number of digits present in the specified number.

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */
    public int CountDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

         while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }  

        return iCount;
    }
}

class PP_027
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.CountDigits(iValue);    

        System.out.println("Number of Digits are : " + iRet);
    }
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 751

 Sample Output
------------------------------------------------------------------------------
 Number of Digits are : 3
==============================================================================
*/