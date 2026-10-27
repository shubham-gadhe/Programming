//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_063
//
//  Description       : Declaration and definition of a Singly Circular
//                      Linked List class with basic operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//  Time Complexity   : Depends on the linked list operation.
//  Space Complexity  : O(n), where n is the number of nodes.
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of the linked list containing
//                      integer data and a pointer to the next node.
//
//////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

//////////////////////////////////////////////////////////////////
//
//  Class Name        : SinglyCL
//
//  Description       : Represents a Singly Circular Linked List and
//                      provides methods for insertion, deletion,
//                      displaying elements, and counting nodes.
//
//////////////////////////////////////////////////////////////////

class SinglyCL
{
    private:
        PNODE first;        // Points to the first node
        PNODE last;         // Points to the last node
        int iCount;         // Stores the total number of nodes

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : SinglyCL()
//
//  Description       : Initializes the first and last pointers to NULL
//                      and sets the node count to zero.
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
//  Function Name     : Display()
//
//  Description       : Displays all elements present in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: Display()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the total number of nodes in the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

int SinglyCL :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst()
//
//  Description       : Inserts a new node containing the given integer
//                      at the beginning of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: InsertFirst(int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Inserts a new node containing the given integer
//                      at the end of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: InsertLast(int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node containing the given integer
//                      at the specified position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: InsertAtPos(int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node from the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteFirst()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node from the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteLast()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes the node located at the specified
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteAtPos(int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates an object of the SinglyCL class and
//                      invokes the constructor.
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
//  Sample Input     : No input
//
//  Sample Output    :
//  Inside Constructor
//
//////////////////////////////////////////////////////////////////