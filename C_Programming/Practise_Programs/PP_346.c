//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_346
//
//  Description       : Program to open a source file, check
//                      whether it is opened successfully and
//                      display its complete contents using
//                      read() system call with a buffer size
//                      of 1024 bytes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
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
//  Description       : Opens program594.c in read-only mode.
//                      If the file cannot be opened, displays
//                      an error message and terminates. Otherwise,
//                      reads the file contents in chunks of
//                      BUFFER_SIZE bytes, displays the data,
//                      clears the buffer and closes the file.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/11/2026
//
//  Input             : None
//
//  Output            : Displays the complete contents of
//                      program594.c or an error message.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0;

    fd = open("program594.c", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        printf("%s", Buffer);
        memset(Buffer, '\0', sizeof(Buffer));
    }

    close(fd);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No input required.
//
//  File Required:
//  program594.c
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Displays the complete source code stored in program594.c.
//
//////////////////////////////////////////////////////////////////