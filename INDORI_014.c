// 14 write a menu driven program for sceintific calculator using switch case statement


#include <stdio.h>
#include <math.h>
void main () {
	int a,b;
	char op;
  float output;

	printf("a: ");
	scanf("%d", &a);

	printf("b: ");
	scanf("%d", &b);

	printf("operator: ");
	scanf(" %c", &op);

	switch(op){
	case '+':
	output=a+b;
	break;
	case '-':
	output=a-b;
	break;
	case '*':
	output=a*b ;
	break;
	case '/':
	output=a/b;
	break;
	case '%':
	output=a%b;
	break;
	case 'p':
	output=pow(a,b);
	break;
  }	
	printf("%lf \n", output);
}
