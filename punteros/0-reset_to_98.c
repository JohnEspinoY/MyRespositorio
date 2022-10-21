#include <stdio.h>

void reset_to_98(int *n)
{
  *n=98;
}

int main () {

   //int  *ptr = NULL;

   //printf("The value of ptr is : %x\n", ptr  );
    //int a = 'A';
    int n;
    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

