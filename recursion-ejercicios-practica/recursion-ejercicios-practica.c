#include <stdio.h>
int print(int i)
{
if(i==1)
{
i=1;
return 1;
}
else
{
return print(i-1)+1;
}
}

int main()
{
int i=50;
for(i=1;i<=50;i++)
{
printf(" %i",print(i));
}
return 0;
}

