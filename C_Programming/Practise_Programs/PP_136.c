//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_136
//
//  Description       : This program demonstrates Call by Address in C.
//                      The function receives the addresses of two
//                      variables and swaps their actual values.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Swap()
//
//  Description       : It is used to swap the values of two integer
//                      variables using Call by Address. The function
//                      receives the addresses of the variables and
//                      modifies their actual values.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/08/2026
//
//////////////////////////////////////////////////////////////////

void Swap(int *ptr1, int *ptr2)
{
    int temp = 0;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int i = 11;
    int j = 21;

    Swap(&i, &j);

    printf("%d\n", i);
    printf("%d\n", j);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      21
//      11
//
//////////////////////////////////////////////////////////////////