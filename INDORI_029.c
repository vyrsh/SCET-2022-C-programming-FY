// Q27 Write a program to find the sum and average of different numbers. The user sould be able to
// enter as many numbers as he wants.

#include<stdio.h>

int main() {
int i;
int sum=0;
int num=0;
printf("enter 999 to end input\n");
for (i=1; num!=999; i++)
  {

	  sum+=num;
	  printf("enter number: ");
	  scanf("%d",&num);
  }
  printf("\nsum: %d", sum);
  printf("\naverage: %f\n",(float)sum/(i-2));

  return 0;

}

