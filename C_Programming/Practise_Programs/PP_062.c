/*
==============================================================================
 File Name   : PP_062.c

 Program     : Accept and Display Array Elements Using a Loop

 Description : Accepts five integer elements from the user, stores them in an
               array using a for loop, and displays all the entered elements.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

int main()
{
    int Arr[5] = {0};

    int iCnt = 0;

    // Accept array elements from the user
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    // Display all elements of the array
    printf("Elements of Array of : \n");

    for(iCnt = 0; iCnt < 5 ; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    } 

    return 0;   
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
10
20
30
40
50

 Sample Output
------------------------------------------------------------------------------
Elements of Array of :
10
20
30
40
50
==============================================================================
*/