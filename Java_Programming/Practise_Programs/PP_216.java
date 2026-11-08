//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_216
//
//  Description       : Demonstration of traversing a Singly Linear
//                      Linked List using the head reference in Java.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//  Time Complexity   : O(1)
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
//  Class Name        : PP_216
//
//  Description       : Creates three nodes, connects them to
//                      form a Singly Linear Linked List, and
//                      traverses the list using the head reference.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/11/2026
//
//////////////////////////////////////////////////////////////////

class PP_216
{
    //////////////////////////////////////////////////////////////////
    //
    //  Method Name       : main
    //
    //  Description       : Creates three node objects, assigns
    //                      data values, connects the nodes, and
    //                      traverses the linked list by updating
    //                      the head reference to access each node.
    //
    //  Author            : Shubham Somanath Gadhe
    //  Date              : 08/11/2026
    //
    //  Input             : No user input.
    //
    //  Output            : Displays the data of all three nodes:
    //                      11, 21, and 51.
    //
    //  Time Complexity   : O(1)
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

        System.out.println(head.data);
        head = head.next;

        System.out.println(head.data);
        head = head.next;

        System.out.println(head.data);
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