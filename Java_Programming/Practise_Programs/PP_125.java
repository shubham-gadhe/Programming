//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_125
//
//  Description       : This program accepts a string from the user
//                      and replaces every occurrence of the
//                      character 'A' or 'a' with an underscore
//                      character using a user-defined method.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/08/2026
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
    //  Method Name      : Update()
    //
    //  Description      : It converts the given string into a
    //                      character array, replaces every
    //                      occurrence of 'A' or 'a' with '_',
    //                      and returns the updated string.
    //
    //////////////////////////////////////////////////////////////////

    public String Update(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == 'A' || Arr[i] == 'a')
            {
                Arr[i] = '_';
            }
        }

        String ret = new String(Arr);

        return ret;
    }
}

class PP_125
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        StringX strobj = new StringX();
        String sRet = null;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.Update(data);

        System.out.println("Updated string is : " + sRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Ganesh
//
//  Sample Output :
//
//      Enter String :
//      Updated string is : G_nesh
//
//////////////////////////////////////////////////////////////////