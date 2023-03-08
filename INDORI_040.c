
#include <stdio.h>
int main() {

	int marks[20][2];
	for (int st = 0; st<20; st++) {
		marks[st][0]=st+1; //store roll no
		printf("enter marks for roll no %d: ", st+1);
		scanf("%d", &marks[st][1]);
	}

}
