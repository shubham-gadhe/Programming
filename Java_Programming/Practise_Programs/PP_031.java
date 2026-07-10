/*
==============================================================================
 Program     : Count Odd Digits in a Number

 Description : Reads an integer from the user and counts the number of odd
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
     Function    : CountOddDigits

     Description : Counts the number of odd digits present in the specified
                   number.

     Parameters  : iNo - Number whose digits are to be examined.

     Returns     : Number of odd digits present in the specified number.

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */    
    public int CountOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

         while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iCount++;
            }  
            iNo = iNo / 10;      
        }  

        return iCount;
    }
}

class PP_031
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.CountOddDigits(iValue);    

        System.out.println("Number of Odd Digits are : " + iRet);
    }
}

 /*
    ==============================================================================
     Function    : CountOddDigits

     Description : Counts the number of odd digits present in the specified
                   number.

     Parameters  : iNo - Number whose digits are to be examined.

     Returns     : Number of odd digits present in the specified number.

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */