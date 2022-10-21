#include<stdio.h>
#include<conio.h>
#include<string.h>
void imprimir(char *s)
{
int i = 0;

	while (*(s + i))
		{
				i++;
		}
    i = i - 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
/**
int cant, i;

strlen(s);

for(int i=strlen(s);i>0;i--)
{
putchar(s[i]);
}
*/
/**
  while(*s!='\0')
  {
   cant++;
   s++;
  }
  printf("%c",*s);
  printf("%i",cant);

  */
}

int main()
{
  char *str;

    int len;
    int cant=0;
    str ="I do not fear computers. I fear the lack of them - Isaac Asimov";
    // el str se comporta como un vector
    // se va imprimir *str ya que es donde apunta a dicho valor
    // el str es el valor que se mueve a la direccion de la memoria.
    imprimir(str);
   /** while(*str!='\0')
    {
    putchar(*str);
    str++;
    }
*/
    return (0);
}
