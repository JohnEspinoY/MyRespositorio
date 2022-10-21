#include <stdio.h>
int imprimir(int i)
{
if(i==1)
{
i=1;
}
else
{
return i+imprimir(i-1);
}
}
int main()
{
printf("%i",imprimir(5));
return 0;
}

