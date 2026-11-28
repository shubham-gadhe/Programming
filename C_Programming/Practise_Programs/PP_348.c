//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_348
//
//  Description       : Program to read data from a file in chunks
//                      of 1024 bytes and display it on standard
//                      output using read() and write() system calls.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1) - Fixed-size buffer
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
//  Description       : Opens program594.c in read-only mode,
//                      reads the file in chunks of 1024 bytes,
//                      and writes the data to standard output.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/11/2026
//
//  Input             : None
//
//  Output            : Displays the contents of program594.c.
//
//  Time Complexity   : O(n), where n is the file size in bytes.
//
//  Space Complexity  : O(1), due to the fixed-size buffer.
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
        write(1, Buffer, iRet);

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
//  The program reads data from program594.c.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Displays the contents of program594.c on the screen.
//  (Output depends on the contents of the file.)
//
//////////////////////////////////////////////////////////////////