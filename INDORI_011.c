// 11 enter marks, marks between 100 and 80: "distinction"
// 79-60 ""1st class"
// 59 to 40 "2nd class"
// less than 40, "fail"

#include <stdio.h>
void main() {
	int a;	
	printf("\n enter the marks: ");
	scanf("%d", &a);
    if (a>80 && a<100) {
	printf("Distinction\n");
	}
	else if (a>60 && a<79) {
	printf("1st class\n");
	}
	else if (a<59 && a>40) { 
	printf("2nd class\n");
	}
	else if (a<40) {
    printf("Fail\n");
  }
}
