#include<stdio.h>
#include<conio.h>
/**
enteder punteros (verlo siempre)
*/
int main()
{
    // probaremos en el caso que el puntero apunta a un entero
    printf("probaremos en el caso que el puntero apunta a un entero \n\n");
    int a;
    a=10;
    int *pu;
    pu=&a;
    printf("%p \n",a);
    printf("%p \n",&a);
    printf("%p \n",pu);
    printf("%p \n",&*pu);
    printf("%p \n",&pu);
    printf("%i \n\n",a);
    printf("%i \n\n",*pu);
    printf("-------------------------------------------------------- \n ");
    printf("probaremos en el caso que el puntero p no apunta a ningun lado \n\n ");
    // probaremos en el caso que el puntero p no apunta a ningun lado
    int *p;
     // *p=10;    el sistema dejará de funcionar debido a que *p no apunta anigun dato
     // p=10; me votara error del sistema;
     // p="10" es una asignaion para comprobar si el *p o p nos devuelve ese valor asignado
    p="10";
    printf("%p \n",*p);
    printf("%p \n",&*p);
    printf("%p \n",p);
    printf("%p \n",&p);
    printf("%i \n\n",*p);

    printf("-------------------------------------------------------- \n ");
    // probaremos en el caso que el puntero es un char
    printf("probaremos en el caso que el puntero es un char \n\n");
    char *str;
    str="vivo por ella";
    printf("%p \n",str);
    printf("%p \n",&*str);
    printf("%s \n",str);
    printf("%c \n",str);
    printf("%c \n",str[0]);  // el str como direcciion tambien se comporta como un vector y puede imprimir caracter por caracter seguido de de su posicion en los corchetes.
    // printf("%s \n",*str);  habrá un fallo en el sistema ya que *str no puede leer todos los caracteres juntos
    printf("%c \n",*str);
    return 0;
}
