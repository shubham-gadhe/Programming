//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_341
//
//  Description       : Program to open a file in read-only mode,
//                      move the file offset 10 bytes backward
//                      from the end using lseek() system call
//                      and read 10 bytes from that position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/11/2026
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
//  Description       : Opens a file in read-only mode, moves the
//                      file offset 10 bytes backward from the
//                      end using lseek(), reads 10 bytes and
//                      displays the data read from the file.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/11/2026
//
//  Input             : None
//
//  Output            : Displays the number of bytes read and
//                      the data read from the file.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[BUFFER_SIZE] = {'\0'};

    fd = open("Marvellous.txt", _O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        lseek(fd, -10, 2);

        iRet = read(fd, Data, 10);

        printf("%d bytes gets successfully read\n", iRet);

        printf("Data from file is : %s\n", Data);

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
//  Assumption:
//  Marvellous.txt contains:
//
//  Jay Ganesh Infosystems
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  10 bytes gets successfully read
//  Data from file is : Systems
//
//////////////////////////////////////////////////////////////////