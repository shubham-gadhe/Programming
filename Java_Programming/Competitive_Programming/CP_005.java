//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Multiplication_Table
//
//  Description  : This program accepts a number and
//                 displays its multiplication table
//                 from 1 to 10.
//
//  Example:
//      Input  : 5
//      Output : 5 10 15 20 25 30 35 40 45 50
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void printTable(int iNum)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNum * iCnt);
        }
    }
}

class CP_005
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printTable(5);
    }
}