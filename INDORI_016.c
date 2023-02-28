// 16 sum of first N nos

#include <stdio.h>

// write sum of first n no's
void main()
{

int sum=0;
int n;
printf("\n enter N");
scanf("%d", &n);
for (int i=0; i<=n; i++)
{sum=sum+i;}

printf("%d",sum);

}
