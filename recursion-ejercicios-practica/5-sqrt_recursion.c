#include <stdio.h>
int _cal(int n,int m)
{

if(n==m*m)
{
    return (m);
}
else
{
if(n < m*m)
{
 return (-1);
}
}
return (_cal(n,m+1));
}
int _sqrt_recursion(int n)
{
return (_cal(n,1));
}

int main()
{
 int r;
    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
return 0;
}

