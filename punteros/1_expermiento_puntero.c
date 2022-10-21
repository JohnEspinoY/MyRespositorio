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
}

int main()
{
    char *str;
    str ="I do not fear computers. I fear the lack of them - Isaac Asimov";
    imprimir(str);

    return (0);
}
