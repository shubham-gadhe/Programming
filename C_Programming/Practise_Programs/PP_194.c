//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_194
//
//  Description       : This program creates two linked structure
//                      objects, displays their addresses and next
//                      pointers, and accesses the second node's data
//                      through the first node's next pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj1, obj2;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = NULL;

    printf("%p\n", (void *)&obj1);
    printf("%p\n", (void *)&obj2);
    printf("%p\n", (void *)obj1.next);
    printf("%p\n", (void *)obj2.next);
    printf("%d\n", obj1.next->data);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      Address of obj1 (system-dependent)
//      Address of obj2 (system-dependent)
//      Address of obj2 (same as the address printed for obj2)
//      (nil) or an implementation-dependent null pointer display
//      21
//
//////////////////////////////////////////////////////////////////