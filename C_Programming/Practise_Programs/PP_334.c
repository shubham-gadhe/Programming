//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_334
//
//  Description       : Program to open a file in read-only mode,
//                      perform two consecutive read operations
//                      using read() system call and display the
//                      data read during each operation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/11/2026
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
//  Function Name     : main
//
//  Description       : Opens a file, reads 13 bytes during the
//                      first read operation and 3 bytes during
//                      the second read operation. Displays the
//                      number of bytes read and the data obtained.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/11/2026
//
//  Input             : None
//
//  Output            : Displays the file descriptor, number of
//                      bytes read and data from both read
//                      operations.
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
    char Data[100] = {'\0'};
    char DataX[100] = {'\0'};

    fd = open("Marvellous.txt", _O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets succesfully opened with fd : %d\n", fd);

        iRet = read(fd, Data, 13);

        printf("%d bytes get succesfully Read \n", iRet);

        printf("Data from file is : %s\n", Data);

        iRet = read(fd, DataX, 3);

        printf("%d bytes get succesfully Read \n", iRet);

        printf("Data from file is : %s\n", DataX);

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
//  Marvellous.txt contains at least 16 bytes:
//
//  Jay Ganesh...ABC
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  File gets succesfully opened with fd : 3
//  13 bytes get succesfully Read
//  Data from file is : Jay Ganesh...
//  3 bytes get succesfully Read
//  Data from file is : ABC
//
//////////////////////////////////////////////////////////////////