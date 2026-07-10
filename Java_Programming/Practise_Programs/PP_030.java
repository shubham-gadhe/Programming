/*
==============================================================================
 Program     : Count Even Digits in a Number

 Description : Reads an integer from the user and counts the number of even
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
     Function    : CountEvenDigits

     Description : Counts the number of even digits present in the specified
                   number.

     Parameters  : iNo - Number whose digits are to be examined.

     Returns     : Number of even digits present in the specified number.

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */
    public int CountEvenDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

         while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iCount++;
            }        
        }  

        return iCount;
    }
}

class PP_030
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.CountEvenDigits(iValue);    

        System.out.println("Number of Even Digits are : " + iRet);
    }
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 864257

 Sample Output
------------------------------------------------------------------------------
 Number of Even Digits are : 3
==============================================================================
*/