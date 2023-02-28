#include <stdio.h>

int fact(n) {
	
	if (n==1) {
		return 1;
	}
	else { 
	return n*fact(n-1);
	}
}

int main() {

int N, fct;
printf("Enter N: ");
scanf("%d", &N);
fct=fact(N);
printf("factorial:%d\n",fct);

}



