//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_061
//
//  Description       : Menu-driven implementation of Singly Linear
//                      Linked List supporting insertion, deletion,
//                      display, and counting of nodes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//  Time Complexity   : O(1) for InsertFirst(), DeleteFirst(), Count()
//                      O(N) for InsertLast(), DeleteLast(),
//                      InsertAtPos(), DeleteAtPos(), and Display()
//                      O(N) for a complete list traversal
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
//  Date              : 26/10/2026
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
//  Description       : Traverses and displays all elements of the
//                      singly linked list from first to last.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
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
//  Description       : Returns the current number of nodes in the
//                      singly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
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
//                      beginning of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
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
//  Description       : Creates a new node and inserts it at the
//                      end of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
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
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
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
//                      and decrements the node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
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
//                      and decrements the node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
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
//  Description       : Deletes the node at the specified valid
//                      position and decrements the node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteAtPos(int iPos)
{    
    int i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

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

        target = temp->next;
        temp->next = target->next;
        delete target;

        this->iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Displays a menu that allows the user to
//                      insert, delete, display, and count nodes
//                      in the singly linked list until termination.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;

    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while(iChoice != 9)
    {
        cout<<"----------------------------------\n";
        cout<<"Enter your choice : \n";
        cout<<"----------------------------------\n";
        cout<<"1 : Insert node at first Position\n";
        cout<<"2 : Insert node at last Position\n";
        cout<<"3 : Insert node at given Position\n";
        cout<<"4 : Delete node at first Position\n";
        cout<<"5 : Delete node at last Position\n";
        cout<<"6 : Delete node at given Position\n";
        cout<<"7 : Display the elements\n";
        cout<<"8 : count the number of elements\n";
        cout<<"9 : Terminate the appplication\n";
        cout<<"----------------------------------\n";

        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value : \n";
                cin>>iValue;

                sobj.InsertFirst(iValue);
                break;  

            case 2:
                cout<<"Enter the value : \n";
                cin>>iValue;

                sobj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value : \n";
                cin>>iValue;

                cout<<"Enter the Position : \n";
                cin>>iPosition;

                sobj.InsertAtPos(iValue, iPosition);
                break;

            case 4:

                sobj.DeleteFirst();
                break;

            case 5:

                sobj.DeleteLast();
                break;

            case 6:

                cout<<"Enter the Position : \n";
                cin>>iPosition;

                sobj.DeleteAtPos(iPosition);
                break;

            case 7:

                cout<<"Elements of the linked list are : \n";
                sobj.Display();
                break;

            case 8:

                iRet = sobj.Count();
                cout<<"Number of elements are : "<<iRet<<"\n";
                break;

            case 9:

                cout<<"Thank you for using Marvellous Infosystems Application\n";
                break;

            default:

                cout<<"Invalid Choice\n";
        }
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  1
//  11
//  1
//  21
//  2
//  31
//  7
//  8
//  9
//
//  Sample Output:
//
//  Elements of the linked list are :
//  | 21 | -> | 11 | -> | 31 | -> NULL
//  Number of elements are : 3
//  Thank you for using Marvellous Infosystems Application
//
//////////////////////////////////////////////////////////////////
