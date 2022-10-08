#include <stdio.h>

int main()
{
int j,i;
for(j=0; j <=6 ; j++)
{
for (i=1;i<=j;i++)
{
 printf("%d",7-i);
 putchar(' ');
}
putchar('\n');
}
return 0;
}
