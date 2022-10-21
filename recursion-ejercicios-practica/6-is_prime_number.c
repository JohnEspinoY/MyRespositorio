#include <stdio.h>
int _root(int base, int root)
{
	if ( base%root==0 )
	{
		return (0);
	}
	else
	{
		return (1);
	}
		return (_root(base, root + 1));
}

int is_prime_number(int n)
{

    return (_root(n,2));

}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
