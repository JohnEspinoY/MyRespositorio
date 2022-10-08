#include <stdio.h>

int main()
{
int j,i;
for(j=1; j <=6 ; j++)
{
for (i=1;i<=7-j;i++)
{
 putchar(i+'0');
 putchar(' ');
}
putchar('\n');
}
return 0;
}

