#include<stdio.h>
#include<conio.h>

int main()
{
  char *str;
    int len;
    int cant=0;
    str ="I do not fear computers. I fear the lack of them - Isaac Asimov";
    // el str se comporta como un vector
    printf("%c \n",*str);
    // se va imprimir *str ya que es donde apunta a dicho valor
    // el str es el valor que se mueve a la direccion de la memoria.

    while(*str!='\0')
    {
    putchar(*str);
    str++;
    }
    return (0);
}
