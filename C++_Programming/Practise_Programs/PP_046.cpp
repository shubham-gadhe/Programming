
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_046
//
//  Description       : Demonstrates the use of a constructor
//                      to initialize a singly linked list object.
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

        //////////////////////////////////////////////////////////////
        //
        //  Constructor Name  : SinglyLL()
        //
        //  Description       : Initializes the first pointer to NULL
        //                      and displays a constructor message.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 22/10/2026
        //
        //////////////////////////////////////////////////////////////

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
        }
};

//////////////////////////////////////////////////////////////////
//
//  Method Name       : main()
//
//  Description       : Creates an object of the SinglyLL class,
//                      which automatically invokes the constructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;

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
