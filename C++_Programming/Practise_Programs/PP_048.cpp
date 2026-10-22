
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_048
//
//  Description       : Demonstrates the drawbacks of public data
//                      members by allowing direct modification
//                      of the singly linked list's internal state.
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
//  Description       : Creates a SinglyLL object and directly
//                      modifies its public data members,
//                      demonstrating an encapsulation drawback.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;

    sobj.first = NULL;      
    sobj.iCount = 15;       

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      Inside Constructor
//
//////////////////////////////////////////////////////////////////
