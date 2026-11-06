//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_082
//
//  Description       : Implements a Generic Doubly Linear Linked
//                      List with insertion, deletion, display,
//                      and count operations. Supports different
//                      data types using templates.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Time Complexity   : InsertFirst()  - O(1)
//                      InsertLast()   - O(n)
//                      InsertAtPos()  - O(n)
//                      DeleteFirst()  - O(1)
//                      DeleteLast()   - O(n)
//                      DeleteAtPos()  - O(n)
//                      Display()      - O(n)
//                      Count()        - O(1)
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
//  Description       : Represents a generic node of the linked
//                      list containing data of type T, a pointer
//                      to the next node and a pointer to the
//                      previous node.
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
    struct node<T> *prev;
};

//////////////////////////////////////////////////////////////////
//
//  Class Name        : DoublyLL
//
//  Description       : Provides generic member functions to
//                      perform insertion, deletion, display,
//                      and count operations on a Doubly Linear
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//////////////////////////////////////////////////////////////////

#pragma pack(1)
template <class T>
class DoublyLL
{
    private:
        struct node<T> * first;
        int iCount;

    public:
        DoublyLL();
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
//  Function Name     : DoublyLL
//
//  Description       : Initializes the first pointer to NULL
//                      and the node counter to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None.
//  Output            : Initializes the DoublyLL object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
DoublyLL<T> :: DoublyLL()
{
    this->iCount = 0;       
    this->first = NULL;     
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Traverses the linked list and displays
//                      all elements from the first node to the
//                      last node, showing both next and previous
//                      link directions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None.
//  Output            : Displays all linked list elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = first;

    cout<<" NULL <=> ";

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | <=>";
        temp = temp->next;
    }

    cout<<" NULL\n";
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of nodes
//                      present in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None.
//  Output            : Returns the number of nodes.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
T DoublyLL<T> :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Creates a new node and inserts it at the
//                      beginning of the linked list. Updates the
//                      next and previous pointers accordingly.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : Value of generic data type T.
//  Output            : Inserts a new node at the beginning.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast
//
//  Description       : Creates a new node and inserts it at the
//                      end of the linked list by traversing
//                      the list to its last node. Updates the
//                      next and previous pointers accordingly.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : Value of generic data type T.
//  Output            : Inserts a new node at the end.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: InsertLast(T iNo)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;        
    }

    iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos
//
//  Description       : Inserts a new node at the specified
//                      position in the linked list. Validates
//                      the position and handles insertion at
//                      the beginning, end, or middle. Updates
//                      the next and previous pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : Value of generic data type T and the
//                      position at which the node is inserted.
//  Output            : Inserts a new node at the specified
//                      position or displays an error message
//                      for an invalid position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: InsertAtPos(T iNo, int iPos)
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
        newn->prev = NULL;

        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst
//
//  Description       : Deletes the first node of the linked list
//                      and updates the first pointer. Handles
//                      empty lists and lists containing one node.
//                      Updates the previous pointer of the new
//                      first node when required.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None.
//  Output            : Removes the first node from the list.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {   
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }

    iCount--;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node of the linked list
//                      by traversing to the second-last node
//                      and updating its next pointer to NULL.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None.
//  Output            : Removes the last node from the list.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: DeleteLast()
{
    struct node<T> *temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete(temp->next);

        temp->next = NULL;
    }

    iCount--;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos
//
//  Description       : Deletes the node at the specified
//                      position in the linked list. Validates
//                      the position and handles deletion at
//                      the beginning, end, or middle. Updates
//                      the next and previous pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : Position of the node to be deleted.
//  Output            : Removes the node at the specified
//                      position or displays an error message
//                      for an invalid position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: DeleteAtPos(int iPos)
{
    struct node<T> *temp = NULL;

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

        temp->next = temp->next->next;
        delete (temp->next->prev);
        temp->next->prev = temp;      

        iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an integer Doubly Linear Linked
//                      List object, performs insertion at the
//                      beginning, end, and specified position,
//                      and performs deletion from the beginning,
//                      end, and specified position. Displays the
//                      list and node count after each operation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None.
//  Output            : Displays linked list elements and the
//                      number of nodes after each operation.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    DoublyLL<int> dobj;
    int iRet = 0;

    cout<<endl;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;

    cout<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;   

    cout<<endl;

    dobj.InsertAtPos(105, 4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;   

    cout<<endl;

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;

    cout<<endl;

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;

    cout<<endl;

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;   

    cout<<endl;

    return 0;
};

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
//   NULL <=>  | 11 | <=> | 21 | <=> | 51 | <=> NULL
//  Number of Nodes are : 3
//
//   NULL <=>  | 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of Nodes are : 6
//
//   NULL <=>  | 11 | <=> | 21 | <=> | 51 | <=> | 105 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of Nodes are : 7
//
//   NULL <=>  | 21 | <=> | 51 | <=> | 105 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of Nodes are : 6
//
//   NULL <=>  | 21 | <=> | 51 | <=> | 105 | <=> | 101 | <=> | 111 | <=> NULL
//  Number of Nodes are : 5
//
//   NULL <=>  | 21 | <=> | 51 | <=> | 105 | <=> | 111 | <=> NULL
//  Number of Nodes are : 4
//
//////////////////////////////////////////////////////////////////