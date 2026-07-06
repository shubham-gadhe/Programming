//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_017
//
//  Description  : This program accepts a number from the user 
//                 and checks whether it is a perfect number
//                 using an optimized approach with early
//                 loop termination.
//
//  Example:
//      Input  : 28
//      Output : It is perfect
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class NumberX
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
               iSum = iSum + iCnt;
            }
            if(iSum > iNo)
            {
                break;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }    
}

class PP_017
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt(); 
        
        NumberX nobj = new NumberX();

        bRet = nobj.CheckPerfect(iValue);
        
        if(bRet == true)
        {
            System.out.println("It is perfect");
        }
        else
        {
            System.out.println("It is not perfect");
        }
    }
}

// Time Complexity : O(N/2)
// Where N >= 0