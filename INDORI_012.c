// 12 write a program to prepare, a pay slip, with following data. 
// DA=10% of basic salary, HRA = 7.5% of basic, MA=300, PF = 3.5% of basic, GROSS SALARY= basic+DA+HRA+MA

#include <stdio.h>
void main() {
	float BASIC, DA, HRA, PF, GROSS;	
	float MA=300;
	printf("\n enter the BASIC SALARY: ");
	scanf("%f", &BASIC);
	DA= 0.1*BASIC;
	HRA= 0.075*BASIC;
	PF= 0.035*BASIC;
	
	GROSS=BASIC+DA+HRA+MA+PF;
	printf("GROSS: %f\n", GROSS);
}
