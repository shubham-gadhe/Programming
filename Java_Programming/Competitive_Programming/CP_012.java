//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Grade_Based_On_Marks
//
//  Description  : This program accepts marks from the user
//                 and displays the corresponding grade
//                 based on the given marks.
//
//  Example:
//      Input  : 82
//      Output : B
//
//////////////////////////////////////////////////////////////////

class Logic
{
    void displayGrade(int iMarks)
    {
        if(iMarks >= 91 && iMarks <= 100)
        {
            System.out.println("A");
        }
        else if(iMarks >= 71 && iMarks <= 90)
        {
            System.out.println("B");
        }
        else if(iMarks >= 51 && iMarks <= 60)
        {
            System.out.println("C");
        } 
        else
        {
            System.out.println("D");
        }
    }
}

class CP_012
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.displayGrade(82);
    }
}