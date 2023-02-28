#include <stdio.h>

int main()                             {

int N;
printf("Enter N: ");
scanf("%d", &N);    


    for(int i=3; i<=N; i=i+2)     {
        start:
    
        for(int n=3; n*n <= i; n=n+2)  {
    
                if (0==i%n) {
                    //number is not prime, goto next iter
                    i=i+2;
                    goto start;
                            }          }
    
    	printf("prime: %d\n", i);
                                  }    }

