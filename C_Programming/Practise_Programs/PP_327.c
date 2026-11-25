//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_327
//
//  Description       : Program to open a file in read-only mode
//                      using open() system call and close it
//                      using close() system call.
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
#include<unistd.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Opens a file in read-only mode, displays
//                      its file descriptor and closes it using
//                      close() system call.
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

        close(fd);
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