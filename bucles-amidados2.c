#include <stdio.h>

int main()
{
for (int i=1; i <=5; i++) {

    printf("*");
}
printf("\n");
for (int i=2; i <=4; i++) {
    printf("*");
    for (int j=2; j <=4 ; j++) {

       printf(" ");
    }
    printf("*\n");
}
for (int i=1; i <=5; i++) {

    printf("*");
}


return 0;
}

