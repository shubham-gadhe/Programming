//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_014
//
//  Description  : This program accepts a number from the user 
//                 and calculates and displays the sum of all
//                 its factors except the number itself using a
//                 user-defined class and method.
//
//  Example:
//      Input  : 12
//      Output : Summation of factors : 16
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class NumberX
{
    public void SumFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
               iSum = iSum + iCnt;
            }
        }

        System.out.println("Summation of factors: " + iSum);
    }    
}

class PP_014
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt(); 
        
        NumberX nobj = new NumberX();

        nobj.SumFactors(iValue);
        
    }
}

// Time Complexity : O(N/2)
// Where N >= 0