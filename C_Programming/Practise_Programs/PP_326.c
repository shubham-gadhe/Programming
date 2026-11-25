//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_326
//
//  Description       : Program to open an existing file in
//                      read-only mode using open() system call
//                      and display its file descriptor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/11/2026
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Opens a file in read-only mode using
//                      open() system call and displays the
//                      file descriptor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/11/2026
//
//  Input             : None
//
//  Output            : Displays file opening status and
//                      file descriptor.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int fd = 0;
    fd = open("Marvellous.txt", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets succesfully opened with fd : %d\n", fd);
    }

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
//  File gets succesfully opened with fd : 3
//
//////////////////////////////////////////////////////////////////