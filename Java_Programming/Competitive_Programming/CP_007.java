//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Even_Numbers
//
//  Description  : This program accepts a number and
//                 displays all even numbers from
//                 1 up to that number.
//
//  Example:
//      Input  : 10
//      Output : 2 4 6 8 10
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }   
}

class CP_007
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printEvenNumbers(20);
    }
}