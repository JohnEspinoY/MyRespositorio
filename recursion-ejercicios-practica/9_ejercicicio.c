#include <stdio.h>
//puedes usar void  e int
int imprimir(char palabra[])
{
char *mirella;
mirella=palabra;
if (*mirella== '\0')
{
printf("\n");
}
else
{
printf("%c",*mirella);
imprimir(mirella+1);
}
}
int main()
{
char palabra[]="hola mundo";
imprimir(palabra);
return 0;
}


