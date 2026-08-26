//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_117
//
//  Description       : This program accepts a string from the user
//                      and counts the number of capital characters
//                      present in the string using a user-defined
//                      method.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CountCapital()
    //
    //  Description      : It is used to count the number of capital
    //                      characters present in the given string.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 26/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public int CountCapital(String str)
    {
        int i = 0;
        int iCount = 0;
        
        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class PP_117
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of Capital Characters : " + iRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Jay Ganesh
//
//  Sample Output :
//
//      Enter String :
//      Number of Capital Characters : 2
//
//////////////////////////////////////////////////////////////////