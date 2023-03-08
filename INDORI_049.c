#include <stdio.h>

int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main() {
	int r1,r2;
	printf("enter r1: ");
	scanf("%d", &r1);
	
	printf("enter r2: ");
	scanf("%d", &r2); 

	swap(&r1,&r2);

	printf("\nr1: %d \nr2: %d\n", r1, r2);
}
