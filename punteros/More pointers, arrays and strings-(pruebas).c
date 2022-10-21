#include <stdio.h>

int main()
{
int n = 5;
int array[5];
int i = 3;
array[n] = i;
printf("%i\n",array[n]);
printf("------------\n");
int array2[2]={1,7};
printf("%i\n",array2[0]);
printf("%i\n",array2[1]);
printf("%i\n",array2[2]);
printf("------------\n");
int array3[0]={};
printf("%i\n",array3[0]);
printf("------------\n");
for(i=0;i<3;i++)
{
printf("%i\n",array2[i]);
}
return 0;
}
