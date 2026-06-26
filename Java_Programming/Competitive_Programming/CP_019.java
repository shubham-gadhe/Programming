//////////////////////////////////////////////////////////////////
//
//  File Name    : Find_Largest_Digit
//
//  Description  : This program accepts a number and
//                 finds the largest digit present
//                 in the given number.
//
//  Example:
//      Input  : 83429
//      Output : Largest Digit is : 9
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void findLargestDigit(int iNum)
    {
        int iDigit = 0, iComp = 0;
        int iNo = iNum;

        while(iNo > 0)  
        {
            iDigit = iNo % 10; 

            if(iComp < iDigit)  
            {
                iComp = iDigit;  
            }
            iNo = iNo / 10;  
        }
        System.out.println("Largest Digit is : " + iComp);
    }
}

class CP_019
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.findLargestDigit(83429);
    }
}