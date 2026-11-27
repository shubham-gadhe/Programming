//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_337
//
//  Description       : Program to open a file in read-only mode,
//                      perform two consecutive read operations
//                      and clear the character array using memset()
//                      with sizeof() before the second read.
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
//  Function Name     : main
//
//  Description       : Opens a file, reads 13 bytes and displays
//                      the data. Clears the complete character
//                      array using memset() and sizeof(), reads
//                      the next 3 bytes and displays the data.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 27/11/2026
//
//  Input             : None
//
//  Output            : Displays the file descriptor, number of
//                      bytes read and data after both read
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

        memset(Data, '\0', sizeof(Data));

        iRet = read(fd, Data, 3);

        printf("%d bytes get succesfully Read \n", iRet);

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