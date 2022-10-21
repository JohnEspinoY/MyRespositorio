#include <stdio.h>

int imprimir(int i)
{
if(i<=50)
{
printf(" %i",i);
imprimir(i+1);
}
}
int main()
{
imprimir(1);
return 0;
}

