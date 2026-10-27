//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_062
//
//  Description       : Defines the basic structure of a Singly
//                      Circular Linked List and initializes its
//                      first pointer, last pointer, and node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//  Time Complexity   : O(1) for constructor initialization
//                      O(1) for main() object creation
//
//  Space Complexity  : O(1) for initializing the list
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

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:

        //////////////////////////////////////////////////////////////////
        //
        //  Function Name     : SinglyCL()
        //
        //  Description       : Initializes the first and last pointers
        //                      to NULL and sets the node count to zero.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 27/10/2026
        //
        //////////////////////////////////////////////////////////////////

        SinglyCL();
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : SinglyCL()
//
//  Description       : Displays a constructor message and initializes
//                      the first pointer, last pointer, and node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

SinglyCL :: SinglyCL()
{
    cout<<"Inside Constructor\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates an object of the SinglyCL class to
//                      initialize an empty singly circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyCL sobj;


    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  No user input is required.
//
//  Sample Output:
//
//  Inside Constructor
//
//////////////////////////////////////////////////////////////////