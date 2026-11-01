//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_065
//
//  Description       : Demonstrates the use of a class to
//                      represent a Doubly Circular Linked List
//                      and displays the size of its object.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//  Time Complexity   : main() - O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of a Doubly Circular
//                      Linked List with data, next, and prev
//                      pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Class Name        : DoublyCL
//
//  Description       : Represents a Doubly Circular Linked List
//                      using first and last node pointers and
//                      a node counter.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//////////////////////////////////////////////////////////////////

class DoublyCL
{
    private:
        PNODE first;
        PNODE last; 
        int iCount;
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an object of the DoublyCL class
//                      and displays its size using sizeof.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//  Input             : None.
//  Output            : Displays the size of the DoublyCL object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    DoublyCL dobj;

    cout<<sizeof(dobj);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  9
//
//  Note: With #pragma pack(1), the class object contains two
//        pointers (4 bytes each on a 32-bit system) and one
//        integer (4 bytes), so the size is 12 bytes on a
//        32-bit system and 17 bytes on a 64-bit system.
//
//  The exact output depends on the system architecture.
//
//////////////////////////////////////////////////////////////////