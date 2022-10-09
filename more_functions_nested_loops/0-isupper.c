#include<stdio.h>
#include<conio.h>
int main()
{

        int i,j;
        for(j= 0; j < 1; j++)
        {
        for (i = 0 ; i <= 9; i++)
        {
        putchar(i+'0');
        }
        for (i = 0 ; i <= 4; i++)
        {
        putchar('1');
        putchar(i + '0');
        }
        }


return 0;
}
/**
#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: no return

void print_numbers(void)
{
        int i;

        for (i = 0 ; i <= 9; i++)
        {
                _putchar(i + '0');

        }
        _putchar('\n');
}
*/
