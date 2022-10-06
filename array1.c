#include <stdio.h>
int main()
{
printf("array numericos y alfabeticos \n");
printf("arrays numericos \n\n");

int numeros[6],x;

numeros[1]=100;
numeros[2]=200;
numeros[3]=300;
numeros[4]=400;
numeros[5]=500;
numeros[6]=422;
for(x=1;x<=6;x=x+1)
{
printf("%i\n",numeros[x]);
}
printf("arrays alfabeticos \n\n");
char datosPersonales[4][50]=
{
"pedro morales","edad; 35 años","altura : 175cm","peso :65"
};
for(x=0;x<4;x++)
{
printf("%s\n",datosPersonales[x]);
}
return 0;
}
