//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_190
//
//  Description       : This program defines a structure named node
//                      containing an integer data member and a pointer
//                      to the next node, then displays its size.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;

    printf("%zu\n", sizeof(obj));

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      16
//
//  Note : The output may vary depending on the system architecture
//         and compiler due to structure padding and pointer size.
//
//////////////////////////////////////////////////////////////////