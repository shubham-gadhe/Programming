//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_243
//
//  Description       : Implementation of Singly Linear Linked List
//                      with insertion and deletion operations at
//                      the first position, last position, and a
//                      specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//  Time Complexity   : O(1) for InsertFirst() and DeleteFirst()
//                      O(N) for InsertLast(), DeleteLast(),
//                      InsertAtPos(), DeleteAtPos(), and Display()
//                      O(1) for Count()
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
//  Description       : Displays all elements of the singly linked
//                      list from the first node to the last node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the total number of nodes currently
//                      recorded in the linked list.
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
//  Description       : Inserts a new node at the beginning of the
//                      singly linked list and increments the count.
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

    if(this->first == NULL)
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
//  Description       : Inserts a new node at the end of the singly
//                      linked list and increments the count.
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

    if(this->first == NULL)
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
//  Description       : Inserts a new node at the specified valid
//                      position. Delegates insertion at the first
//                      or last position to the corresponding methods.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
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

        temp = this->first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node of the linked list
//                      and decrements the node count when a node
//                      is successfully deleted.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteFirst()
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
        temp = this->first;

        this->first = this->first->next;

        delete temp;
    }

    this->iCount--;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node of the linked list
//                      and decrements the node count when a node
//                      is successfully deleted.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteLast()
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
        temp = this->first;

        while(temp->next->next != NULL)
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
//  Description       : Validates the specified position and handles
//                      deletion at the first and last positions.
//                      The middle-position deletion logic is
//                      incomplete in the provided implementation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteAtPos(int iPos)
{    
    int i = 0;
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
        temp = this->first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }




        this->iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates a singly linked list, performs
//                      insertion and deletion operations, and
//                      displays the list and its node count.
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

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();    
    cout<<"Number of elements are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteLast();

    sobj.Display();

    iRet = sobj.Count();    
    cout<<"Number of elements are : "<<iRet<<endl;

    cout<<endl;

    sobj.InsertAtPos(105, 4);

    sobj.Display();

    iRet = sobj.Count();    
    cout<<"Number of elements are : "<<iRet<<endl;

    cout<<endl;


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
//  | 11 | -> | 21 | -> | 51 | -> NULL
//  Number of elements are : 3
//
//  | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//  Number of elements are : 6
//
//  | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//  Number of elements are : 5
//
//  | 21 | -> | 51 | -> | 101 | -> | 111 | -> NULL
//  Number of elements are : 4
//
//  | 21 | -> | 51 | -> | 101 | -> | 105 | -> | 111 | -> NULL
//  Number of elements are : 5
//
//////////////////////////////////////////////////////////////////
*/