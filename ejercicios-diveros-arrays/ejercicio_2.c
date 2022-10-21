#include <stdio.h>
int main()
{
char palabra[]="Welcome to w3resource.com";

int x=0,y=0;
int m=0;
while(palabra[m]!=0)
{
if(palabra[m]=='a' || palabra[m]=='e' || palabra[m]=='i' || palabra[m]=='o' || palabra[m]=='u')
{
x++;
}
else
{
if(palabra[m]!=' ' && palabra[m]!='.')
{
y++;
}
}
m++;
}
printf("%i\n",x);
printf("%i\n",y);
return 0;
}
