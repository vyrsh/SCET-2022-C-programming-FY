// 4 write a program to compute Fahrenheit from Centigrade
// f = (1.8 * c) + 32

#include <stdio.h>
int main ()
{
float F,C;

printf("\n enter input Centigrade: ");
scanf("%f", &C);

F = (1.8 * C) + 32;

printf("Fahrenheit %f \n", C);
};

