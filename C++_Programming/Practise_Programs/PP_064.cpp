//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_064
//
//  Description       : Implementation of a Singly Circular Linked List
//                      with insertion, deletion, display, and counting
//                      operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//  Time Complexity   : Display()       - O(n)
//                      Count()         - O(1)
//                      InsertFirst()   - O(1)
//                      InsertLast()    - O(1)
//                      InsertAtPos()   - O(n)
//                      DeleteFirst()   - O(1)
//                      DeleteLast()    - O(n)
//                      DeleteAtPos()   - O(n)
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
//  Description       : Represents a node containing integer data and
//                      a pointer to the next node.
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
//  Description       : Implements a Singly Circular Linked List using
//                      first and last pointers and maintains the count
//                      of nodes.
//
//////////////////////////////////////////////////////////////////

class SinglyCL
{
    private:
        PNODE first;        
        PNODE last;         
        int iCount;         

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
//                      and initializes the node count to zero.
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
//  Description       : Traverses the circular linked list and displays
//                      the data stored in each node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: Display()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout<<" | "<<temp->data<<" | -> ";
        temp = temp->next;
    } while (last->next != temp);

    cout<<"\n";
}

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
//  Description       : Creates a new node and inserts it at the
//                      beginning of the circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    last->next = first;

    iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Creates a new node and inserts it at the end
//                      of the circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;

    iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node containing the given value
//                      at the specified position in the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: InsertAtPos(int iNo, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i = 0;

    if(iPos < 1 && iPos > iCount + 1)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }

    iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Removes the first node from the circular
//                      linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else
    {
        first = first->next;
        delete(last->next);
    }

    iCount--;

    last->next = first;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Removes the last node from the circular
//                      linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteLast()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }
    else
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete temp->next;
        last = temp;

        iCount--;

        last->next = first;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes the node located at the specified
//                      position in the circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE target = NULL;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        free(target);
    }

    iCount--;

    last->next = first;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates a SinglyCL object, performs insertion
//                      and deletion operations, displays the list,
//                      and prints the node count after each operation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    SinglyCL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    cout<<endl;

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.InsertAtPos(99, 4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input     : No input
//
//  Sample Output    :
//  Inside Constructor
//
//  Note             : The remaining output displays the linked-list
//                     elements and node counts after each operation.
//
//////////////////////////////////////////////////////////////////