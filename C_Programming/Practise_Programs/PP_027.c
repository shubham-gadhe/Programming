//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_String_Updater
//
//  Description  : This program accepts the frequency
//                 from the user and displays the
//                 message "Jay Ganesh..." that
//                 many times using a user-defined function.
//
//  Example:
//      Input  : -5
//      Output : Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added an updater to convert
//                    negative frequency into a
//                    positive value before processing.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept Frequency

        Call Display() by passing Frequency

        In Display()

            If Frequency is negative

                Convert it into positive

            Initialize Counter as 1

            Repeat until Counter is less than or equal to Frequency

                Display "Jay Ganesh..."

                Increment Counter by 1

    STOP
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt= 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);
      
    return 0;
}