//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_091
//
//  Description       : Implementation of Singly Linear Linked List
//                      using Class in C++
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Stores data and address of the next node
//                      in the Singly Linear Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
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
//  Class Name        : SinglyLL
//
//  Description       : Implements Singly Linear Linked List
//                      operations using a class.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//////////////////////////////////////////////////////////////////

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
//  Function Name     : SinglyLL
//
//  Description       : Initializes the first pointer to NULL and
//                      initializes the node count to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

SinglyLL::SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements of the Singly Linear
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : None
//
//  Output            : Displays all linked list elements.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
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
//  Function Name     : Count
//
//  Description       : Returns the total number of elements
//                      present in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : None
//
//  Output            : Returns the count of linked list elements.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int SinglyLL :: Count()
{
    return this->iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the Singly Linear Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : Integer value to be inserted.
//
//  Output            : Inserts the given value at the beginning
//                      of the linked list.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
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
//  Function Name     : InsertLast
//
//  Description       : Inserts a new node at the end of the
//                      Singly Linear Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : Integer value to be inserted.
//
//  Output            : Inserts the given value at the end of
//                      the linked list.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
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
//  Function Name     : InsertAtPos
//
//  Description       : Reserved for inserting a new node at a
//                      specified position in the linked list.
//                      Currently, the function is empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : Integer value and position.
//
//  Output            : No operation is performed.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst
//
//  Description       : Reserved for deleting the first node
//                      from the linked list. Currently, the
//                      function is empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : None
//
//  Output            : No operation is performed.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteFirst()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Reserved for deleting the last node
//                      from the linked list. Currently, the
//                      function is empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : None
//
//  Output            : No operation is performed.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteLast()
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos
//
//  Description       : Reserved for deleting a node from a
//                      specified position in the linked list.
//                      Currently, the function is empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : Position of the node to be deleted.
//
//  Output            : No operation is performed.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteAtPos(int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an object of SinglyLL and performs
//                      insertion operations at the beginning and
//                      at the end of the linked list. Displays
//                      the elements and their total count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays linked list elements and count.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
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


    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No user input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  | 11 | -> | 21 | -> | 51 | -> NULL
//  Number of elements are : 3
//
//  | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//  Number of elements are : 6
//
//////////////////////////////////////////////////////////////////