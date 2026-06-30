//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Division_Schedule
//
//  Description  : This program accepts a division from the
//                 user and displays its examination
//                 schedule.
//
//  Example:
//      Input  : C
//      Output : Your exam at 9:20 AM
//
//      Input  : d
//      Output : Your exam at 10:30 AM
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 97 || chDiv == 65)
    {
        printf("Your exam at 7 Am");
    }
    else if(chDiv == 98 || chDiv == 66)
    {
        printf("Your exam at 8:30 Am");
    }
    else if(chDiv == 99 || chDiv == 67)
    {
        printf("Your exam at 9:20 Am");
    }
    else if(chDiv == 100 || chDiv == 68)
    {
    printf("Your exam at 10:30 Am");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Division : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}