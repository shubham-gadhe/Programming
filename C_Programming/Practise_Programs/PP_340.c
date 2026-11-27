//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_340
//
//  Description       : Program to open a file in read-only mode,
//                      change the file offset using lseek()
//                      with SEEK_SET and SEEK_CUR, and perform
//                      two read operations from different
//                      positions in the file.
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
//                      file offset 5 bytes from the beginning,
//                      reads 10 bytes, clears the buffer, moves
//                      the offset 5 bytes forward from the current
//                      position and reads another 10 bytes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/11/2026
//
//  Input             : None
//
//  Output            : Displays the number of bytes read and
//                      the data obtained from both read operations.
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
        lseek(fd, 5, 0);

        iRet = read(fd, Data, 10);

        printf("%d bytes gets successfully read\n", iRet);

        printf("Data from file is %s\n", Data);

        memset(Data, '\0', sizeof(Data));

        lseek(fd, 5, 1);

        iRet = read(fd, Data, 10);

        printf("%d bytes gets successfully read\n", iRet);

        printf("Data from file is %s\n", Data);

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
//  Data from file is esh Infosys
//  10 bytes gets successfully read
//  Data from file is ms
//
//////////////////////////////////////////////////////////////////