#include <stdio.h>
#include <unistd.h>
int _putchar(char c);

void rev_string(char *s);

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

void rev_string(char *s)
{
    int x=0;
    int i;
    char tem;
    while(*(s+x)!=0)
    {
    x++;
    }
    for(i=0;i<=x;i++)
    {    x=x-1;
        tem=s[i];
        s[i]=s[x];
        s[x]=tem;
    }
}



/**int _putchar(char c)
{
        return (write(1, &c, 1));
}
*/
