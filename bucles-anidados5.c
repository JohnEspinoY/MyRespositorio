#include <stdio.h>
int main()
{
int j,i;
for(j=1; j <=8 ; j++)
{
for (i=1;i<=8;i++)
{
if(i==j||i==9-j)
{
putchar('*');
}
else
{
putchar(' ');
}
}
putchar('\n');
}
return 0;
}

