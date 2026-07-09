/*
==============================================================================
 Program     : Display Digits of a Number

 Description : Reads an integer from the user and displays each digit of the
               specified number starting from the least significant digit.

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
     Function    : DisplayDigits

     Description : Displays each digit of the specified number from right to
                   left.

     Parameters  : iNo - Number whose digits are to be displayed.

     Returns     : None

     Complexity  : Time  : O(d)
                   Space : O(1)

     Note        : d represents the number of digits in the given number.
    ==============================================================================
    */
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }        
    }
}

class PP_023
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);    
    }
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 751

 Sample Output
------------------------------------------------------------------------------
 1
 5
 7
==============================================================================
*/