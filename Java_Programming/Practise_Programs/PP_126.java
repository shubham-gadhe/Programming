//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_126
//
//  Description       : This program imports the user-defined
//                      StringX class from the Marvellous package
//                      and uses its methods to count capital
//                      characters, small characters, digits, spaces,
//                      and special symbols from a given string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

import Marvellous.StringX;
import java.util.Scanner;

class PP_126
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

        iRet = strobj.CountDigits(data);

        System.out.println("Number of Digits are : " + iRet);

        iRet = strobj.CountSpace(data);

        System.out.println("Number of Spaces are : " + iRet);

        iRet = strobj.CountSpecial(data);

        System.out.println("Number of Special Symbols are : " + iRet);

        sobj.close();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Jay@123 Ganesh!
//
//  Sample Output :
//
//      Enter String :
//      Number of Capital Characters : 2
//      Number of Small Characters : 8
//      Number of Digits are : 3
//      Number of Spaces are : 1
//      Number of Special Symbols are : 2
//
//////////////////////////////////////////////////////////////////