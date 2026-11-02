//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_067
//
//  Description       : Defines a Doubly Circular Linked List
//                      class with constructor, display, count,
//                      insertion, and deletion operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Time Complexity   : Constructor()  - O(1)
//                      Display()     - O(n)
//                      Count()       - O(1)
//                      InsertFirst() - O(1)
//                      InsertLast()  - O(1)
//                      InsertAtPos() - O(n)
//                      DeleteFirst() - O(1)
//                      DeleteLast()  - O(1)
//                      DeleteAtPos() - O(n)
//
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
//  Description       : Represents a node of a Doubly Circular
//                      Linked List with data, next, and prev
//                      pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
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
//  Description       : Provides the structure and member function
//                      declarations for a Doubly Circular
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//////////////////////////////////////////////////////////////////

class DoublyCL
{
    private:
        PNODE first;
        PNODE last; 
        int iCount;

    public:
        DoublyCL();

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
//  Function Name     : DoublyCL
//
//  Description       : Initializes the first and last pointers
//                      to NULL and the node counter to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : None.
//  Output            : Initializes the DoublyCL object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

DoublyCL :: DoublyCL()
{
    cout<<"Inside Constrcutor\n";
    first = NULL;
    last = NULL;
    iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements of the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : None.
//  Output            : Displays linked list elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: Display()
{

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of nodes in the
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : None.
//  Output            : Returns the node count.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int DoublyCL :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : Integer value.
//  Output            : Inserts a new node at the beginning.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: InsertFirst(int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast
//
//  Description       : Inserts a new node at the end of the
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : Integer value.
//  Output            : Inserts a new node at the end.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: InsertLast(int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos
//
//  Description       : Inserts a new node at the specified
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : Integer value and position.
//  Output            : Inserts a new node at the given position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: InsertAtPos(int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst
//
//  Description       : Deletes the first node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : None.
//  Output            : Deletes the first node.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteFirst()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : None.
//  Output            : Deletes the last node.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteLast()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos
//
//  Description       : Deletes a node from the specified
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : Position of the node to be deleted.
//  Output            : Deletes the node at the given position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteAtPos(int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an object of the DoublyCL class.
//                      The constructor is invoked automatically.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 02/11/2026
//
//  Input             : None.
//  Output            : Displays the constructor message.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    DoublyCL dobj;

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
//  Inside Constrcutor
//
//////////////////////////////////////////////////////////////////