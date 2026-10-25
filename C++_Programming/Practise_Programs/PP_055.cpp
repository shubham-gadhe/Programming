//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_240
//
//  Description       : Implemented a Singly Linked List class with
//                      Display(), Count(), InsertFirst(), and
//                      InsertLast() methods. Other insertion and
//                      deletion methods are currently empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//  Time Complexity   : O(n) for Display() and InsertLast()
//                      O(1) for Count() and InsertFirst()
//                      O(1) for the currently empty methods
//  Space Complexity  : O(n) for storing n nodes
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
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

SinglyLL::SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : Traverses the linked list using the node
//                      count and displays each node's data.
//                      Prints NULL at the end of the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: Display()
{
    PNODE temp = NULL;
    int i = 0;

    for(i = 1, temp = this->first; i <= this->iCount; i++, temp = temp->next)
    {
        cout<<"| "<<temp->data<<" | -> ";
    }

    cout<<"NULL"<<endl;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the current number of nodes in
//                      the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
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
//  Description       : Creates a new node and inserts it at the
//                      beginning of the linked list. Increments
//                      the node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(this->iCount == 0)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Creates a new node and inserts it at the
//                      end of the linked list. Increments the
//                      node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(this->iCount == 0)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCount++;         
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Placeholder method for inserting a node
//                      at a specified position in the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
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
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteFirst()
{

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Placeholder method for deleting the last
//                      node of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
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
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteAtPos(int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates a SinglyLL object, inserts three
//                      nodes at the beginning, displays the list,
//                      and prints its count. Then inserts three
//                      nodes at the end and displays the updated
//                      list and count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    SinglyLL sobj;

    cout<<endl;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    cout<<endl;

    sobj.InsertLast(101);    
    sobj.InsertLast(111);    
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    cout<<endl;


    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//
//      | 11 | -> | 21 | -> | 51 | -> NULL
//      Number of elements are : 3
//
//      | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//      Number of elements are : 6
//
//////////////////////////////////////////////////////////////////