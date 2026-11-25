//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_325
//
//  Description       : Program to create a file using creat()
//                      system call and display its file descriptor.
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
//  Description       : Creates a file using creat() system call
//                      and displays the file descriptor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/11/2026
//
//  Input             : None
//
//  Output            : Displays file creation status and
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

    fd = creat("Marvellous.txt", 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets succesfully created with fd : %d\n", fd);
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
//  File gets succesfully created with fd : 3
//
//////////////////////////////////////////////////////////////////