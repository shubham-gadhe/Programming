//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_330
//
//  Description       : Program to open a file in read-write mode
//                      with append access using open() system
//                      call, write data into the file and display
//                      the number of bytes successfully written.
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
//  Description       : Opens a file in read-write and append mode,
//                      writes data at the end of the file, displays
//                      the number of bytes written and closes it.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 25/11/2026
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

    fd = open("Marvellous.txt", O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets succesfully opened with fd : %d\n", fd);

        iRet = write(fd, "Jay Ganesh...", 13);

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
//  13 bytes get succesfully written
//
//////////////////////////////////////////////////////////////////