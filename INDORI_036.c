// Q 35
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// combination of 35 and P&C

#include<stdio.h>

int fact(int n) {
if (n<=1)
	return 1;
else
	return n*fact(n-1);
}

int main() {
	int st =25;
	for (int n=st; n>0; n--) {

		for (int i=0;i<n;i++)
			printf(" ");

		for (int i=0;i<=(st-n);i++) {
			printf("%d ",fact(st-n) / (fact(i)*fact(st-n-i)));}

		printf("\n");
	}
}
