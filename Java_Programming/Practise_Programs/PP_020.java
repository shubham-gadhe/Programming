/*
==============================================================================
 Program     : Check Whether a Number is Prime

 Description : Reads an integer from the user and determines whether the
               specified number is prime.

 Author      : Shubham Gadhe
==============================================================================
*/

import java.util.Scanner;

/*
==============================================================================
 Class       : NumberX

 Description : Provides utility methods for performing operations on numbers.
==============================================================================
*/
class NumberX
{
     /*
    ==============================================================================
     Function    : CheckPrime

     Description : Determines whether the specified number is prime.

     Parameters  : iNo - Number to be checked for primality.

     Returns     : true  - If the number is prime.
                   false - If the number is not prime.

     Complexity  : Time  : O(N/2)
                   Space : O(1)
    ==============================================================================
    */
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
               return false;        // Bad Programming Practise            
            }
        }

        return true;
    }    
}

class PP_020
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt(); 
        
        NumberX nobj = new NumberX();

        bRet = nobj.CheckPrime(iValue);
        
        if(bRet == true)
        {
            System.out.println("It is prime");
        }
        else
        {
            System.out.println("It is not prime");
        }
    }
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 13

 Sample Output
------------------------------------------------------------------------------
 It is prime
==============================================================================
*/