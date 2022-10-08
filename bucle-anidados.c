#include <stdio.h>

int main()
{
for(int i=1;i<=5;i++)
{
putchar('*');
}
putchar('\n');
for (int i=2; i<=4 ; i++) {
for (int j=1; j<= 5 ; j++) {

if(j==2 || j==3 || j==4)
{
putchar(' ');
}
else
{
putchar('*');
}
}
printf("\n");
}
for(int i=1;i<=5;i++)
{
putchar('*');
}
return 0;
}
