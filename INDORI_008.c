#include <stdio.h>

void main() {
	float NUM;
	printf("\n enter the num: ");
	scanf("%f", &NUM);
    if (NUM>0) {
	printf("NUM is POSITIVE\n");
	}
	else if (NUM<0) {
	printf("NUM is NEGATIVE\n");
	}
	else {
	printf("NUM is ZERO\n");
	}
}
