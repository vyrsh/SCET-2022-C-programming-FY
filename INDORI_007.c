// a-z 97 to 122
// A-Z 65 to 90
// 0-9 48-58
#include <stdio.h>
void main() {
	char a;	
	printf("\n enter the char: ")
	scanf("%c", &a)
    if (a>97 && a<122) {
	printf("a is Lowercaps")
	}
	else if (a>65 && a<0) {
	printf("a is CAPS")
	}
	else if (a>48 && a<58) { 
	printf("a is NUM")
	}
	else {printf("a is special")}
}
}
