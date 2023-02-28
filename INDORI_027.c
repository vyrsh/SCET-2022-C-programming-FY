#include <stdio.h>

int main() {

int N;
printf("Enter N: ");
scanf("%d", &N);

int fact=1;
for (int i=1; i<=N; i++) {
fact=fact*i;
}
printf("factorial:%d\n",fact);
}
