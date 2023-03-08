#include <stdio.h>

int fact(int n) {
	if (n<=1) return 1;
	else return n*fact(n-1);
}

int main() {
	int num;
	printf("enter number: ");
	scanf("%d", &num);
	printf("factorial: %d\n", fact(num));
}
