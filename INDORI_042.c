//42 Write a program to replace a character, to delete a character in a given string.


#include <stdio.h>

int main() {
	char str[10] = "Hello";
	char r1,r2;

	printf("%s\n", str);

	printf("r1: ");
	scanf(" %c", &r1);
	
	printf("r2: ");
	scanf(" %c", &r2);

	// iterate through string, and replace
	for (int i=0; i<10; i++) {
		if (r1==str[i]) 
			str[i]=r2;
	}

	printf("%s\n", str);
}
