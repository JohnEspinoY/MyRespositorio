void print_rev(char *s)
{
	int cant = 0;
	int i, n;

	  for (i = 0; s[i] != '\0'; i++)
	  {
		cant++;
	  }

	  for (i = (cant - 1); i >= 0; i--)
	{
		putchar(s[i]);
	}
	  putchar('\n');
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

// no olvidarse de probar esto
/**
#include "main.h"
/**
 *
 *

void print_rev(char *s)
{
int cant, i;
cant=0;
while(*s!='\0')
{
cant++;
}

for(i=cant; i>0;i--)
{
_putchar(s[i]);
}
}

*/



