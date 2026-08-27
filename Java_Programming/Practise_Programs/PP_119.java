//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_119
//
//  Description       : This program accepts a string from the user,
//                      converts it into a character array using
//                      toCharArray(), and counts the number of capital
//                      and small characters using user-defined methods.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/08/2026
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
    //  Description      : It converts the given string into a
    //                      character array and counts the number of
    //                      capital characters.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 27/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public int CountCapital(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    //////////////////////////////////////////////////////////////////
    //
    //  Method Name      : CountSmall()
    //
    //  Description      : It converts the given string into a
    //                      character array and counts the number of
    //                      small characters.
    //
    //  Author           : Shubham Somanath Gadhe
    //  Date             : 27/08/2026
    //
    //////////////////////////////////////////////////////////////////

    public int CountSmall(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class PP_119
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

        iRet = strobj.CountSmall(data);

        System.out.println("Number of Small Characters : " + iRet);

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
//      Number of Small Characters : 8
//
//////////////////////////////////////////////////////////////////