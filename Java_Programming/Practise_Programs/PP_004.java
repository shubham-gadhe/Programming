//////////////////////////////////////////////////////////////////
//
//  File Name    : PP_004
//
//  Description  : This program displays the numbers from 1 to 10
//                 using a for loop and the printf() method.
//
//  Example:
//      Output : 1
//               2
//               ..
//               10
//
//////////////////////////////////////////////////////////////////

class PP_004
{
    public static void main(String A[])
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.printf("%d\n", iCnt);
        }
    }
}