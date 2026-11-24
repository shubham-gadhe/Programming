//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_324
//
//  Description       : Creates a new file using the creat()
//                      system call and checks whether the file
//                      is created successfully or not.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 24/11/2026
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
//  Description       : Creates a file named Marvellous.txt with
//                      read, write and execute permissions.
//                      Displays the file creation status.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 24/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays a success or failure message
//                      depending on the file creation result.
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
        printf("File gets succesfully created\n");
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
//  File gets succesfully created
//
//////////////////////////////////////////////////////////////////