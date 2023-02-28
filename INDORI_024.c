#include <stdio.h>

int main()    {

int arr[10];
// scan 10 nums using for loop
for (int i=0; i<10; i++ )    {
printf("Enter num %d: ",i+1);
scanf("%d", &arr[i]);
                             }

// iterate through array to find min 
int min = 0x7fffffff;
for (int i=0; i<10; i++ )    {
if (arr[i]<=min)   {
min = arr[i];      }
                             }
printf("Min: %d\n ", min);
              }
