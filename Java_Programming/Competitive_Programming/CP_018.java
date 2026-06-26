//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Perfect_Number
//
//  Description  : This program accepts a number and
//                 checks whether the given number is
//                 a perfect number or not.
//
//  Example:
//      Input  : 6
//      Output : Perfect Number.
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void checkPerfect(int iNum)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= iNum / 2; iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == iNum)
        {
            System.out.println("Perfect Number.");
        }
        else
        {
            System.out.println("Not a Perfect Number.");
        }
    }
}

class CP_018
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkPerfect(6);
    }
}