// 44  Write a program that defines a function to check whether a given number is prime or not

#include <stdio.h> 

int prime(int n) {
	for (int i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}

void main() {
	int num;
	printf("enter num: ");
	scanf("%d", &num);
	
	if (1==prime(num))  printf("num is prime");
	else printf("num is not prime");
	
	printf("\n");
}
