#include <stdio.h>

int main()
{
//char str[] = "CS220";
char str[] = {'C', 'S', '2', '2', '0'};
// a que se debe a que uan definicion en string manda de una manera
// y una definicion en corchetes envia otra

printf("%lu\n",sizeof(char));
char *sPtr;

//la direccion de puntero es casi la misma que la direccion de un array
sPtr = str;
printf("sPtr=%s\n", sPtr);
printf("str =%s\n", str);
sPtr = str;
sPtr = sPtr + 2;
//si quiero encontrar el largo de una cadena en array debo trabajar por posicion [i]
// str = str+2 en una ritmetica de punteros pude direccionar a la ubicacion de array
int ret = printf("sPtr = %s\n", sPtr);
return 0;
}

