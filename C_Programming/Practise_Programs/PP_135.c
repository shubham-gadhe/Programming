//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_135
//
//  Description       : This program demonstrates Call by Value in C.
//                      The values of the actual parameters are not
//                      changed because the function receives copies.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
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
//  Description       : It is used to swap two integer values using
//                      Call by Value. The changes are made only to
//                      the local copies of the parameters.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//////////////////////////////////////////////////////////////////

void Swap(int No1, int No2)
{
    int temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int i = 11;
    int j = 21;

    Swap(i,j);

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
//      11
//      21
//
//////////////////////////////////////////////////////////////////