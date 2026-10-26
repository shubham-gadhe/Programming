//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_051
//
//  Description       : Created a Singly Linked List class with
//                      method declarations and definitions for
//                      display, count, insertion, and deletion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//  Time Complexity   : O(1) for Constructor and Count()
//                      O(1) for currently empty methods
//  Space Complexity  : O(1) as no nodes are currently created
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

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        SinglyLL();
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
//  Function Name     : SinglyLL()
//
//  Description       : Initializes the first pointer to NULL and
//                      initializes the node count to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor\n";
    this->first = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : Placeholder method for displaying the
//                      elements of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: Display()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the current number of nodes in
//                      the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

int SinglyLL :: Count()
{
    return this->iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst()
//
//  Description       : Placeholder method for inserting a node
//                      at the beginning of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: InsertFirst(int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Placeholder method for inserting a node
//                      at the end of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: InsertLast(int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Placeholder method for inserting a node
//                      at a specified position in the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Placeholder method for deleting the first
//                      node of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteFirst()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Placeholder method for deleting the last
//                      node of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteLast()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Placeholder method for deleting a node
//                      from a specified position in the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteAtPos(int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates an object of SinglyLL and invokes
//                      its constructor. No list operations are
//                      performed.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
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
