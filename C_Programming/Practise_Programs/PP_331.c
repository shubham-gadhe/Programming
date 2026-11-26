//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_331
//
//  Description       : Program to open a file in read-write mode
//                      with append access, write a specified
//                      number of bytes from a character array
//                      into the file and display the number
//                      of bytes successfully written.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/11/2026
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
//  Description       : Opens a file in read-write and append mode,
//                      writes 10 bytes from the character array
//                      into the file, displays the number of
//                      bytes written and closes the file.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 26/11/2026
//
//  Input             : None
//
//  Output            : Displays the file descriptor and the
//                      number of bytes successfully written.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";

    fd = open("Marvellous.txt", O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets succesfully opened with fd : %d\n", fd);

        iRet = write(fd, Data, 10);

        printf("%d bytes get succesfully written \n", iRet);

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
//  10 bytes get succesfully written
//
//  File Content Appended
//
//  Marvellous
//
//////////////////////////////////////////////////////////////////