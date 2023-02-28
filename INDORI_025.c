#include <stdio.h>

int main()                                  {

int N;
printf("Enter N: ");
scanf("%d", &N);    

if (N==1 || N==2)  {
printf("Number is prime\n");
return 1;
                   }
if (N<1 || N==10)  {
printf("Number is not prime\n");
return 0;          }

    
for(int n=3; n*n <= N; n=n+2)     {
    
	if (0==N%n){
		printf("Number is not prime\n");
		return 0;
                   }              }
printf("Number is prime\n");
return 1;
                                            }

