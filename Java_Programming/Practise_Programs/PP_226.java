//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_226
//
//  Description       : Implementation of Singly Linear Linked List
//                      with insertion, deletion, display and count
//                      operations at specified positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 10/11/2026
//
//  Time Complexity   : O(n) - Display, InsertLast, DeleteLast,
//                             InsertAtPos and DeleteAtPos
//                      O(1) - InsertFirst, DeleteFirst and Count
//
//  Space Complexity  : O(n) - For storing n nodes
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Class Name        : node
//
//  Description       : Represents an individual node of a singly
//                      linear linked list. Each node contains
//                      integer data and a reference to the next node.
//
//////////////////////////////////////////////////////////////////

class node
{
    public int data;
    public node next;

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : node
    //
    //  Description       : Initializes a node with the given data
    //                      and sets its next reference to null.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : Integer value to be stored in the node.
    //
    //  Output            : Initializes the node.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : SinglyLL
//
//  Description       : Implements a singly linear linked list
//                      with insertion and deletion operations
//                      at the beginning, end and specified position.
//
//////////////////////////////////////////////////////////////////

class SinglyLL
{

    private node first;
    private int iCount;

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : SinglyLL
    //
    //  Description       : Initializes an empty linked list by
    //                      setting first to null and iCount to zero.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Initializes an empty linked list.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public SinglyLL() 
    {
        this.first = null;
        this.iCount = 0;
    }    

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : Display
    //
    //  Description       : Traverses and displays all elements
    //                      of the linked list from first to last.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Displays all node values.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public void Display()
    {
        node temp = first;

        while(temp != null)
        {
            System.out.print("| " + temp.data + " | -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : Count
    //
    //  Description       : Returns the total number of nodes
    //                      present in the linked list.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Returns the number of nodes.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public int Count()
    {
        return iCount;
    }

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertFirst
    //
    //  Description       : Creates and inserts a new node at the
    //                      beginning of the linked list.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : Integer value to be inserted.
    //
    //  Output            : Adds a new node at the beginning.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        iCount++;
    }

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertLast
    //
    //  Description       : Creates and inserts a new node at the
    //                      end of the linked list.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : Integer value to be inserted.
    //
    //  Output            : Adds a new node at the end.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;            
        }

        iCount++;
    }

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : InsertAtPos
    //
    //  Description       : Inserts a new node at the specified
    //                      position in the linked list. Positions
    //                      start from 1.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : Integer value and insertion position.
    //
    //  Output            : Inserts a new node at the valid position.
    //                      Invalid positions are ignored.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public void InsertAtPos(int iNo, int iPos)
    {
        int i = 0;
        node newn = null;
        node temp = null;

        if((iPos < 1) || (iPos > iCount + 1))    
        {
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
            newn = new node(iNo);

            temp = first;

            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            iCount++;
        }        
    }

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : DeleteFirst
    //
    //  Description       : Deletes the first node from the linked
    //                      list and decreases the node count.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Removes the first node, if present.
    //
    //  Time Complexity   : O(1)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else 
        {
            first = first.next;
        }

        iCount--;
    }

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : DeleteLast
    //
    //  Description       : Deletes the last node from the linked
    //                      list and decreases the node count.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : No input.
    //
    //  Output            : Removes the last node, if present.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else 
        {
            node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }

        iCount--;
    }

    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : DeleteAtPos
    //
    //  Description       : Deletes the node at the specified
    //                      position in the linked list. Positions
    //                      start from 1.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : Integer position of the node to delete.
    //
    //  Output            : Removes the node at the valid position.
    //                      Invalid positions are ignored.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////

    public void DeleteAtPos(int iPos)
    {
        int i = 0;
        node temp = null;

        if((iPos < 1) || (iPos > iCount))    
        {
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
                temp = temp.next;
            }

            temp.next = temp.next.next;

            iCount--;
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : PP_226
//
//  Description       : Demonstrates insertion and deletion of
//                      nodes at the beginning, end and specified
//                      position in a singly linear linked list.
//
//////////////////////////////////////////////////////////////////

class PP_226
{
    //////////////////////////////////////////////////////////////
    //
    //  Method Name       : main
    //
    //  Description       : Creates a linked list, inserts six nodes,
    //                      displays the list, deletes the first and
    //                      last nodes, inserts a node at position 4,
    //                      and deletes the node at position 4.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 10/11/2026
    //
    //  Input             : No user input.
    //
    //  Output            : Displays the linked list and node count
    //                      after each set of operations.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(n)
    //
    //////////////////////////////////////////////////////////////

    public static void main(String A[])
    {
        int iRet = 0;

        SinglyLL sobj = new SinglyLL();  

        System.out.println();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet); 

        System.out.println();

        sobj.DeleteFirst();
        sobj.DeleteLast();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        System.out.println();

        sobj.InsertAtPos(105, 4);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        System.out.println();

        sobj.DeleteAtPos(4);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        System.out.println();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  No input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output:
//
//  | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> null
//  Number of nodes are : 6
//
//  | 21 | -> | 51 | -> | 101 | -> | 111 | -> null
//  Number of nodes are : 4
//
//  | 21 | -> | 51 | -> | 101 | -> | 105 | -> | 111 | -> null
//  Number of nodes are : 5
//
//  | 21 | -> | 51 | -> | 101 | -> | 111 | -> null
//  Number of nodes are : 4
//
//////////////////////////////////////////////////////////////////