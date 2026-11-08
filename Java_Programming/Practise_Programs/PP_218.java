//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_218
//
//  Description       : Demonstration of traversing a Singly Linear
//                      Linked List using a while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Class Name        : node
//
//  Description       : Represents a node of a Singly Linear
//                      Linked List containing data and a
//                      reference to the next node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class node
{
    public int data;
    public node next;
}

//////////////////////////////////////////////////////////////////
//
//  Class Name        : PP_218
//
//  Description       : Creates three nodes, connects them to
//                      form a Singly Linear Linked List, and
//                      traverses the entire list using a while
//                      loop and a temporary reference.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class PP_218
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : main
    //
    //  Description       : Creates three node objects, assigns
    //                      data values, connects the nodes, and
    //                      displays all node data by traversing
    //                      the linked list until temp becomes null.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No user input.
    //
    //  Output            : Displays the data of all three nodes:
    //                      11, 21, and 51.
    //
    //  Time Complexity   : O(n)
    //
    //  Space Complexity  : O(1)
    //
    //////////////////////////////////////////////////////////////////

    public static void main(String A[])
    {
        node head = null;

        node obj1 = null;
        node obj2 = null;
        node obj3 = null;

        obj1 = new node();
        obj2 = new node();
        obj3 = new node();

        obj1.data = 11;
        obj2.data = 21;
        obj3.data = 51;

        obj1.next = obj2;
        obj2.next = obj3;
        obj3.next = null;

        head = obj1;

        node temp = head;

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
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
//  11
//  21
//  51
//
//////////////////////////////////////////////////////////////////