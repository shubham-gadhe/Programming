//////////////////////////////////////////////////////////////////
//
//  File Name    : Sum_Of_Even_Numbers
//
//  Description  : This program accepts a number and
//                 calculates the sum of all even
//                 numbers from 1 up to that number.
//
//  Example:
//      Input  : 10
//      Output : Sum of all Even Numbers is : 30
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void SumEvenNumbers(int iNum)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Sum of all Even Numbers is : " + iSum);
    }
}

class CP_016
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SumEvenNumbers(10);
    }
}