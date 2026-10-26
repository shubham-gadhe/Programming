//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_060
//
//  Description       : Implementation of Doubly Linear Linked List
//                      with insertion and deletion operations at
//                      the first position, last position, and a
//                      specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//  Time Complexity   : O(1) for InsertFirst(), DeleteFirst(), Count()
//                      O(N) for Display(), InsertLast(), DeleteLast(),
//                      InsertAtPos(), and DeleteAtPos()
//
//  Space Complexity  : O(N) for storing N nodes
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private :
        PNODE first;
        int iCount;

    public:    
        DoublyLL();
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
//  Function Name     : DoublyLL()
//
//  Description       : Initializes the first pointer to NULL and
//                      initializes the node count to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

DoublyLL::DoublyLL()
{
    cout<<"Inside constructor\n";
    this->first = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : Traverses and displays the doubly linked
//                      list from the first node to the last node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    cout<<"NULL";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the current number of nodes in the
//                      doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

int DoublyLL :: Count()
{
    return this->iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst()
//
//  Description       : Creates a new node and inserts it at the
//                      beginning of the doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Creates a new node and inserts it at the
//                      end of the doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        temp->prev = temp;
    }

    this->iCount++;

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node at the specified position
//                      in the doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos == iCount+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp->prev;
        temp->next = newn;

        this->iCount++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node of the doubly linked
//                      list and decrements the node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        this->first = this->first->next;
        delete temp->prev;
        temp->prev = NULL;
    }

    this->iCount--;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node of the doubly linked
//                      list and decrements the node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = first;

        while(temp ->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes a node at the specified position
//                      and updates the adjacent node links.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos == iCount))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;
        PNODE target = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }
        target = temp->next;

        temp->next = target->next;
        delete(target);                     
        temp->next->prev = temp;            

        this->iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates a doubly linked list, performs
//                      insertion and deletion operations, and
//                      displays the list and its node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    DoublyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.DeleteLast();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.InsertAtPos(105,4);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.DeleteAtPos(4);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    return 0;
}

/*
//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  No user input is required.
//
//  Sample Output:
//
//  Inside constructor
//  NULL| 11 | <=> | 21 | <=> | 51 | <=> NULL
//  Number of elements are : 3
//
//  NULL| 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of elements are : 6
//
//  NULL| 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of elements are : 5
//
//  NULL| 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> NULL
//  Number of elements are : 4
//
//  Output for InsertAtPos() and DeleteAtPos() depends on the
//  current implementation of those methods.
//
//  Note: The supplied implementation contains pointer-linking
//  and position-validation issues. The sample output above shows
//  the intended list sequence for the initial operations.
//
//////////////////////////////////////////////////////////////////
*/
