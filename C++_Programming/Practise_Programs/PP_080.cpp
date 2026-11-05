//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_080
//
//  Description       : Implements a Generic Queue using a Singly
//                      Linear Linked List with enqueue, dequeue,
//                      display, and count operations. Supports
//                      different data types using templates.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Time Complexity   : Enqueue() - O(n)
//                      Dequeue() - O(1)
//                      Display() - O(n)
//                      Count()   - O(1)
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
//  Description       : Represents a generic node of the Queue
//                      containing data of type T and a pointer
//                      to the next node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
struct node
{
    T data; 
    struct node<T> *next;
};

//////////////////////////////////////////////////////////////////
//
//  Class Name        : Queue
//
//  Description       : Provides generic member functions to
//                      perform enqueue, dequeue, display, and
//                      count operations using a linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
class Queue
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        Queue();
        void Enqueue(T iNo);          
        T Dequeue();                  
        void Display();
        T Count();
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Queue
//
//  Description       : Initializes the first pointer to NULL
//                      and the node counter to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Initializes the Queue object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
Queue<T> :: Queue()
{
    this->first = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Enqueue
//
//  Description       : Creates a new node and inserts it at the
//                      end of the linked list, making it the
//                      rear element of the Queue.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : Value of generic data type T.
//  Output            : Adds a new element at the rear of Queue.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void Queue<T> :: Enqueue(T iNo)    
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    newn = new struct node<T>();

    newn->data = iNo;
    newn->next = NULL;

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
    }   

    iCount++;
}   

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Dequeue
//
//  Description       : Removes and returns the front element from
//                      the Queue. If the Queue is empty, displays
//                      an error message and returns -1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Returns the removed element or -1 if the
//                      Queue is empty.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
T Queue<T> :: Dequeue()
{
    int iValue = 0;
    struct node<T> *temp = NULL;

    if(first == NULL)
    {
        cout<<"Queue is Empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
        temp = first;

        first = first->next;
        delete temp;

        iCount--;
        return iValue;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Traverses the linked list and displays
//                      all Queue elements from front to rear.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Displays all Queue elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void Queue<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of elements
//                      present in the Queue.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Returns the number of Queue elements.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
T Queue<T> :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates an integer Queue object, inserts
//                      four elements, displays the Queue, prints
//                      the element count, removes the front
//                      element, displays the updated Queue, and
//                      prints the updated element count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/11/2026
//
//  Input             : None.
//  Output            : Displays Queue elements, removed element,
//                      and element counts.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Queue<int> sobj;
    int iRet = 0;

    cout<<endl;

    sobj.Enqueue(11);
    sobj.Enqueue(21);
    sobj.Enqueue(51);
    sobj.Enqueue(101);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of the Queue are : "<<iRet<<endl;

    cout<<endl;

    iRet = sobj.Dequeue();
    cout<<"Removed element is : "<<iRet<<endl;

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of the Queue are : "<<iRet<<endl;

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
//  | 11 |
//  | 21 |
//  | 51 |
//  | 101 |
//  Elements of the Queue are : 4
//
//  Removed element is : 11
//  | 21 |
//  | 51 |
//  | 101 |
//  Elements of the Queue are : 3
//
//////////////////////////////////////////////////////////////////