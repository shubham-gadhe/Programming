//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_083
//
//  Description       : Generic Singly Circular Linked List
//                      Implementation using Template.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Time Complexity   : InsertFirst()  - O(1)
//                      InsertLast()   - O(1)
//                      InsertAtPos()  - O(n)
//                      DeleteFirst() - O(1)
//                      DeleteLast()  - O(n)
//                      DeleteAtPos() - O(n)
//                      Display()     - O(n)
//                      Count()       - O(1)
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
//  Description       : Represents a node of a singly circular
//                      linked list using a generic data type.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
struct node
{
    T data;
    struct node<T> *next;
};

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Class Name        : SinglyCL
//
//  Description       : Implements a generic singly circular
//                      linked list with insertion, deletion,
//                      display and counting operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
class SinglyCL
{
    private:
        struct node<T> *first;
        struct node<T> *last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        T Count();

        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : SinglyCL
//
//  Description       : Initializes the first and last pointers
//                      to NULL and sets the node count to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Initializes the linked list.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
SinglyCL<T> :: SinglyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements of the singly
//                      circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Displays all nodes.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL<T> :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    struct node<T> *temp = NULL;
    temp = first;

    do 
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }while(temp != first);

    cout<<endl;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of nodes present
//                      in the singly circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Returns the node count.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
T SinglyCL<T> :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the singly circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : iNo - Data to be inserted.
//  Output            : Inserts a node at the beginning.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL<T> :: InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

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

    iCount++;

    last->next = first;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast
//
//  Description       : Inserts a new node at the end of the
//                      singly circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : iNo - Data to be inserted.
//  Output            : Inserts a node at the end.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL<T> :: InsertLast(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

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

    iCount++;

    last->next = first;

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos
//
//  Description       : Inserts a new node at the specified
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : iNo  - Data to be inserted.
//                      iPos - Position for insertion.
//  Output            : Inserts a node at the specified position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL<T> :: InsertAtPos(T iNo, int iPos)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new struct node<T>;

        newn->data = iNo;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst
//
//  Description       : Deletes the first node from the singly
//                      circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Removes the first node.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;

        iCount--;
    }
    else 
    {
        first = first->next;
        delete(last->next);

        last->next = first;

        iCount--;
    }    
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node from the singly
//                      circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Removes the last node.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL<T> :: DeleteLast()
{
    struct node<T> *temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else 
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete(last);
        last = temp;

        last->next = first;
        iCount--;        
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos
//
//  Description       : Deletes a node from the specified
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : iPos - Position of the node to be deleted.
//  Output            : Removes the node at the specified position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL<T> :: DeleteAtPos(int iPos)
{
    struct node<T> *temp = NULL;
    struct node<T> *target = NULL;

    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<endl;
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

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        delete(target);

        iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a generic singly circular linked
//                      list and performs insertion, deletion,
//                      display and counting operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : No input required.
//  Output            : Displays linked list elements and node counts.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyCL<int>sobj;
    int iRet = 0;

    cout<<endl;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.InsertAtPos(105, 4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;   

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
//  | 11 | -> | 21 | -> | 51 | ->
//  Number of Nodes are : 3
//
//  | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | ->
//  Number of Nodes are : 6
//
//  | 11 | -> | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> | 121 | ->
//  Number of Nodes are : 7
//
//  | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> | 121 | ->
//  Number of Nodes are : 6
//
//  | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | ->
//  Number of Nodes are : 5
//
//  | 21 | -> | 51 | -> | 105 | -> | 111 | ->
//  Number of Nodes are : 4
//
//////////////////////////////////////////////////////////////////