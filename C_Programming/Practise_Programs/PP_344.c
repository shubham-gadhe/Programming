//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_344
//
//  Description       : Program to open a source file and display
//                      its complete contents using read() system
//                      call in multiple iterations with a
//                      predefined buffer size.
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
//  Value             : 100
//
//////////////////////////////////////////////////////////////////

#define BUFFER_SIZE 100

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Opens program592.c in read-only mode,
//                      reads its contents in chunks of
//                      BUFFER_SIZE bytes, displays the data
//                      and clears the buffer after each read.
//                      Closes the file after reading is completed.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/11/2026
//
//  Input             : None
//
//  Output            : Displays the complete contents of
//                      program592.c.
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

    fd = open("program592.c", O_RDONLY);

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
//  program592.c
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Displays the complete source code stored in program592.c.
//
//////////////////////////////////////////////////////////////////