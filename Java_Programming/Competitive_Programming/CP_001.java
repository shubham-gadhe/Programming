//////////////////////////////////////////////////////////////////
//
//  File Name    : Sum_Of_Digits
//
//  Description  : This program accepts a number and
//                 calculates the sum of all digits
//                 present in that number.
//
//  Example:
//      Input  : 1234
//      Output : 10
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void SumOfDigits(int iNum)
    {
        int iCnt = 0, iSum = 0, iNo = 0, iDigit = 0;

        iNo = iNum;

        while(iNo > 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        
        System.out.print("Sum of Digits Are : " + iSum);
    }
}

class CP_001
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SumOfDigits(1234);
    }
}