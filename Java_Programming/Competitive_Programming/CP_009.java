//////////////////////////////////////////////////////////////////
//
//  File Name    : Sum_Of_Even_And_Odd_Digits
//
//  Description  : This program accepts a number and
//                 calculates the sum of even digits
//                 and the sum of odd digits separately.
//
//  Example:
//      Input  : 123456
//      Output :
//          Sum of Even Digits : 12
//          Sum of Odd Digits  : 9
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void SumEvenOddDigits(int n)
    {
        int  iNo = 0, iDigit = 0, iEvenSum = 0, iOddSum = 0;

        iNo = n;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Sum of Even Digits : " + iEvenSum);
        System.out.println("Sum of Odd Digits : " + iOddSum);
    }   
}

class CP_009
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SumEvenOddDigits(123456);
    }
}