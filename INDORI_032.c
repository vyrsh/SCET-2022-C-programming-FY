// 33 Write a program to find  1+1/2!+1/3!+1/4!+.....+1/n!.

#include <stdio.h>
int fact(int n) {
	if(1==n)
		return 1;
	else return n*fact(n-1); 
}

int main() {
	double ans = 0;
	for(double i=1.0; i<34;i++)
		ans+= (double)1/fact(i);
	
	printf("%f",ans);
}
