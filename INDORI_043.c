// 43 Write a program to reverse string.

#include<stdio.h>
int main() {
	char str[5] = "Hello";
	char new_str[5];

	for (int i=4; i>=0; i--) 
			new_str[4-i]=str[i];

	printf("%s\n", new_str);

}
