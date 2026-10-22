
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_047
//
//  Description       : Demonstrates constructor initialization of
//                      a singly linked list object with a first
//                      pointer and an element counter.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCount;

        //////////////////////////////////////////////////////////////
        //
        //  Constructor Name  : SinglyLL()
        //
        //  Description       : Initializes the first pointer to NULL
        //                      and the element counter to zero.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 22/10/2026
        //
        //////////////////////////////////////////////////////////////

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
            this->iCount = 0;
        }
};

//////////////////////////////////////////////////////////////////
//
//  Method Name       : main()
//
//  Description       : Creates a SinglyLL object and displays
//                      its initialized first pointer and counter.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;

    cout<<sobj.first<<endl;
    cout<<sobj.iCount<<endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      Inside Constructor
//      0
//      0
//
//  Note:
//      The first pointer is NULL. Its displayed representation
//      is implementation-dependent; commonly, it appears as 0.
//
//////////////////////////////////////////////////////////////////