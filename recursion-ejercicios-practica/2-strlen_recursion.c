#include <stdio.h>
int _puts_recursion(char *s)
{
    if (*s == '\0')
    {
    return 0;
    }
    return _puts_recursion(s+1)+1;
}
int main(void)
{
    int n;
    n = _puts_recursion("\nColton Walker");
    printf("%d\n", n);
    return (0);
}
