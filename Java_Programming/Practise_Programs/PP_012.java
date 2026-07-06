//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_012
//
//  Description  : This program accepts a number from the user
//                 and displays all of its factors except the 
//                 number itself using a user-defined class.
//
//  Example:
//      Input  : 12
//      Output : 1
//               2
//               3
//               4
//               6
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class NumberX
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }    
}

class PP_012
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt(); 
        
        NumberX nobj = new NumberX();

        nobj.DisplayFactors(iValue);
        
    }
}

// Time Complexity : O(N)
// Where N >= 0