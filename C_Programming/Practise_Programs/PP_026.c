//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_String_Function
//
//  Description  : This program accepts the frequency
//                 from the user and displays the
//                 message "Jay Ganesh..." that
//                 many times using a user-defined function.
//
//  Example:
//      Input  : 5
//      Output : Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Implemented a user-defined function
//                    to improve modularity and code
//                    reusability.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept Frequency

        Call Display() by passing Frequency

        In Display()

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