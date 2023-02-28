// 1 scan 2 nums and add, sub, mult, div them.

#include <stdio.h>
int main()
{
float a,b,ADD,SUB,MULT,DIV;

printf("\n enter a: ");
scanf("%f", &a);
printf("\n ENTER B: ");
scanf("%f", &b);

ADD=a+b;
SUB=a-b;
MULT=a*b;
DIV=a/b;

printf("\n addition is %f",ADD);
printf("\n subtraction is %f",SUB);
printf("\n multiplication is %f",MULT);
printf("\n division is %f",DIV);
}
