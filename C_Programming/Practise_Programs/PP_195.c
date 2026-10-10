//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_195
//
//  Description       : This program creates three linked structure
//                      objects, connects them using next pointers,
//                      displays their addresses and pointer values,
//                      and accesses data through the linked nodes.
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
    struct node obj1, obj2, obj3;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    printf("%p\n", (void *)&obj1);
    printf("%p\n", (void *)&obj2);
    printf("%p\n", (void *)&obj3);
    printf("%p\n", (void *)obj1.next);
    printf("%p\n", (void *)obj2.next);
    printf("%p\n", (void *)obj3.next);
    printf("%d\n", obj1.data);
    printf("%d\n", obj1.next->data);
    printf("%d\n", obj1.next->next->data);

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
//      Address of obj3 (system-dependent)
//      Address of obj2 (same as the address printed for obj2)
//      Address of obj3 (same as the address printed for obj3)
//      (nil) or an implementation-dependent null pointer display
//      11
//      21
//      51
//
//////////////////////////////////////////////////////////////////

