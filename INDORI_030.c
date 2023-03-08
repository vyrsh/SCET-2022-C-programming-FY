// 28  Write a program to accept start number and end number from the user and print all the numbers in the range.

#include <stdio.h>
int main() {
int start,end;
printf("enter start: ");
scanf("%d", &start);
printf("enter end: ");
scanf("%d", &end);

for (;start<=end;start++)
	printf("%d ", start);

printf("\n");
return 0;
}

