
#include <stdio.h>
/**
int _strlen(char *s)
{
int f;
char palabra[]= "My first strlen!";
for(f=0;f<16;f++)

}
*/
int main(void)
{
    // en un puntero puede existir por si solo sin la necesidad de crear un char vector
    //
    char *str;
    int len;
    int cant=0;
    str ="My first strlen!";
    // el str se comporta como un vector
    printf("%c \n",*str);
    while(*str!='\0')
    {
    cant++;
    str++;
    }
    printf("%i \n",cant);
    return (0);
}
