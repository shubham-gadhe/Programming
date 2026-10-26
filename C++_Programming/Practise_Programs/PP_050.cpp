//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_050
//
//  Description       : Created a Singly Linked List class with
//                      constructor, display, count, insertion,
//                      and deletion method declarations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/10/2026
//
//  Time Complexity   : O(1) for Count() and Constructor
//                      O(1) for the currently empty methods
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

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : SinglyLL()
        //
        //  Description       : Initializes the first pointer to NULL
        //                      and the node count to zero.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
            this->iCount = 0;
        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : Display()
        //
        //  Description       : Placeholder method for displaying
        //                      the elements of the linked list.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        void Display()
        {

        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : Count()
        //
        //  Description       : Returns the current number of nodes
        //                      in the linked list.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        int Count()
        {
            return this->iCount;
        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : InsertFirst()
        //
        //  Description       : Placeholder method for inserting
        //                      a node at the beginning of the list.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        void InsertFirst(int iNo)
        {

        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : InsertLast()
        //
        //  Description       : Placeholder method for inserting
        //                      a node at the end of the list.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        void InsertLast(int iNo)
        {

        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : InsertAtPos()
        //
        //  Description       : Placeholder method for inserting
        //                      a node at a specified position.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        void InsertAtPos(int iNo, int iPos)
        {

        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : DeleteFirst()
        //
        //  Description       : Placeholder method for deleting
        //                      the first node of the linked list.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        void DeleteFirst()
        {

        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : DeleteLast()
        //
        //  Description       : Placeholder method for deleting
        //                      the last node of the linked list.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        void DeleteLast()
        {

        }

        //////////////////////////////////////////////////////////////
        //
        //  Function Name     : DeleteAtPos()
        //
        //  Description       : Placeholder method for deleting
        //                      a node at a specified position.
        //
        //  Author            : Shubham Somanath Gadhe
        //  Date              : 23/10/2026
        //
        //////////////////////////////////////////////////////////////

        void DeleteAtPos(int iPos)
        {

        }
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates a SinglyLL object and invokes the
//                      constructor. No list operations are performed.
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
