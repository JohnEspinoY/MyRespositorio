#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
int i;
char s[10] ="My School";
	 /** for (i = 0; s[i] != '\0'; i++)
	  {
		cant++;
	  }
	  */
    char tem;
    //s[0]=s[8];
    //s[1]=s[7];
    i=0;
    int x=9;
    for(i=0;i<=x;i++)
    {    x=x-1;
        tem=s[i];
        s[i]=s[x];
        s[x]=tem;
    }
    //printf("%c \n",s[0]);
    //printf("%c \n",s[1]);
    printf("%s\n", s);

      return (0);
}


