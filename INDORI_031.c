// 32 Write a program to find 1+1/2+1/3+1/4+....+1/n.

#include <stdio.h>
int main() {
	double ans = 0;
	for(double i=1.0; i<0xfffffff;i++)
		ans+= 1/i;
	
	printf("%f",ans);
}
