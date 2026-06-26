//////////////////////////////////////////////////////////////////
//
//  File Name    : Calculate_Power_Of_Number
//
//  Description  : This program accepts a base and an
//                 exponent, then calculates the power
//                 of the given base.
//
//  Example:
//      Input  : Base = 2, Exponent = 5
//      Output : 32
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void calculatePower(int iBase, int iExp)
    {
        int iCnt = 0;
        int iResult = 1;
        
        for(iCnt = 1; iCnt <= iExp; iCnt++)
        {
            iResult = iResult * iBase;
        }
        System.out.println(iResult);
    }
}

class CP_015
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.calculatePower(2,5);
    }
}