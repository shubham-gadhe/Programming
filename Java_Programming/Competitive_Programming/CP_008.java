//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Odd_Numbers
//
//  Description  : This program accepts a number and
//                 displays all odd numbers from
//                 1 up to that number.
//
//  Example:
//      Input  : 20
//      Output : 1 3 5 7 9 11 13 15 17 19
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void printOddNumbers(int n)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }   
}

class CP_008
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printOddNumbers(20);
    }
}