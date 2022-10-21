#include <stdio.h>
void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
    _puts_recursion(s+1);
    printf("%c",*s);
    }

}
int main(void)
{
    _puts_recursion("\nColton Walker");
    return (0);
}
