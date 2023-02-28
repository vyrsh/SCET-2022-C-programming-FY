#include <stdio.h>
int main()    {
  
// Take Input
int dig;
printf("Enter digit: ");
scanf("%d", &dig);

// Last Digit  
char ld;
ld  = dig%10;

// Odd or Even
if (0==ld%2)    {
printf("Even"); }
else           {
printf("Odd"); }

printf("\n");

return 0;
              }
