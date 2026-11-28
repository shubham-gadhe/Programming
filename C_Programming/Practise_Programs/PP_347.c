//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_347
//
//  Description       : Program to display a message on the
//                      standard output using write() system call.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/11/2026
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//////////////////////////////////////////////////////////////////
//
//  Macro Name        : BUFFER_SIZE
//
//  Description       : Defines the size of the character buffer.
//
//  Value             : 1024
//
//////////////////////////////////////////////////////////////////

#define BUFFER_SIZE 1024

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Displays the message "Jay Ganesh..."
//                      on standard output using write() system call.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/11/2026
//
//  Input             : None
//
//  Output            : Displays "Jay Ganesh..." on the screen.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    write(1, "Jay Ganesh...", 13);

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
//  Jay Ganesh...
//
//////////////////////////////////////////////////////////////////