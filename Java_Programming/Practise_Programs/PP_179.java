//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_179
//
//  Description       : This program checks whether the given number
//                      is negative, zero, or positive using constant
//                      values and returns the corresponding result.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

import java.util.*;

class PP_179
{
    static final int NEGATIVE = -1;
    static final int ZERO = 0;
    static final int POSITIVE = 1;

    public static int CheckNumberType(int iNo)
    {
        if(iNo < 0)
        {
            return NEGATIVE;
        }
        else if(iNo == 0)
        {
            return ZERO;
        }
        else 
        {
            return POSITIVE;
        }
    }
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = CheckNumberType(iValue);

        if(iRet == NEGATIVE)
        {
            System.out.println(iValue + " is a Negative Number.");
        }
        else if(iRet == ZERO)
        {
            System.out.println(iValue + " is a Zero.");
        }
        else 
        {
            System.out.println(iValue + " is a Positive Number.");
        }

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the Number :
//      -25
//
//  Sample Output :
//      -25 is a Negative Number.
//
//////////////////////////////////////////////////////////////////