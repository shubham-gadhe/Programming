//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_342
//
//  Description       : Program to delete a file using unlink()
//                      system call.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/11/2026
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
//  Value             : 100
//
//////////////////////////////////////////////////////////////////

#define BUFFER_SIZE 100

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Deletes the file named Marvellous.txt
//                      using unlink() system call.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/11/2026
//
//  Input             : None
//
//  Output            : Deletes Marvellous.txt if the operation
//                      is successful.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    unlink("Marvellous.txt");

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
//  No output is displayed.
//
//////////////////////////////////////////////////////////////////