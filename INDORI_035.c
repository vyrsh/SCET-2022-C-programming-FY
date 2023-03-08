// Q 35
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// combination of 33 and 34

#include<stdio.h>

int main() {
	int st =25;
	for (int n=st; n>0; n--) {
		
		for (int i=0;i<n;i++) 
			printf(" ");
		
		for (int i=0;i<(st-n+1);i++) 
			printf("* ");

		printf("\n");	
	}
}
