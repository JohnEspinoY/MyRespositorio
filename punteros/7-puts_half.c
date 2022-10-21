#include <stdio.h>
// revisar en que estoy fallando en mi codigo
void puts_half(char *str)
{
int i;
int x=0;
while(*(str+x)!=0)
{
x++;
}
for(i=(x/2);i<x;i=i+1)
{
putchar(*(str+i));
}
putchar('\n');
}
int main(void)
{
 char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}

