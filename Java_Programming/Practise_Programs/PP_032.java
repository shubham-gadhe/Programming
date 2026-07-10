/*
==============================================================================
 Program     : Count Even and Odd Digits in a Number

 Description : Reads an integer from the user and counts the number of even
               and odd digits present in the specified number.

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
     Function    : CountEvenOddDigits

     Description : Counts the number of even and odd digits present in the
                   specified number and displays the result.

     Parameters  : iNo - Number whose digits are to be examined.

     Returns     : None

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */
    public void CountEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCountEven = 0, iCountOdd = 0;

         while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iCountOdd++;
            } 
            else
                {
                    iCountOdd++;
                } 
            iNo = iNo / 10;      
        }  

        System.out.println("Number of even digits : " + iCountEven);
        System.out.println("Number of odd digits : " + iCountOdd);
    }
}

class PP_032
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.CountEvenOddDigits(iValue);    
    }
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 864257

 Sample Output
------------------------------------------------------------------------------
 Number of even digits : 3
 Number of odd digits  : 3
==============================================================================
*/