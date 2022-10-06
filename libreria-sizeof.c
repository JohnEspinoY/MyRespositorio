
#include <stdio.h>
int main()
{
int x=100;
double y=4587.215;
long z=2548261;
printf("%u %u %u \n",&x,&y,&z);
printf("%d %d %d \n",sizeof(x),sizeof(y),sizeof(z));
for(char y='A';y<='Z';y++)
{
printf("%c..",y);
}
return 0;
}
