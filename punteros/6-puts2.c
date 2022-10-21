#include <stdio.h>
// revisar en que estoy fallando en mi codigo
void puts2(char *str)
{
int i;
int x=0;
while(*(str+x)!=0)
{
x++;
}
for(i=0;i<=x;i=i+2)
{
putchar(*(str+i));
}
putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
