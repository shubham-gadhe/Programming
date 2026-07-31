/*
==============================================================================
 File Name   : PP_061.c

 Program     : Accept and Display Array Elements

 Description : Accepts five integer elements from the user, stores them in an
               array, and displays all the entered elements.

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

    scanf("%d", &Arr[0]);
    scanf("%d", &Arr[1]);
    scanf("%d", &Arr[2]);  
    scanf("%d", &Arr[3]);
    scanf("%d", &Arr[4]);

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
 Elements of Array are :
 10
 20
 30
 40
 50
==============================================================================
*/