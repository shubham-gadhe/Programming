//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_ASCII_Table
//
//  Description  : This program displays the ASCII table
//                 showing the character, decimal,
//                 hexadecimal, and octal values.
//
//  Example:
//      Output : Char  Dec  Hex  Oct
//               A     65   41   101
//               B     66   42   102
//               ...
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iDec = 0;

    printf("Char\tDec\tHex\tOct\n");

    for(iDec = 0; iDec <= 255; iDec++)
    {
        printf("%c\t %d\t %x\t %o\t\n", iDec, iDec, iDec,iDec);        
    }
}

int main()
{
    DisplayASCII();

    return 0;
}