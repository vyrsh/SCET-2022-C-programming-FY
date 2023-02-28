#include <stdio.h>

int main()    {

int arr[10];
// scan 10 nums using for loop
for (int i=0; i<10; i++ )    {
printf("Enter num %d: ",i+1);
scanf("%d", &arr[i]);
                             }

// iterate through array to find max
int max = 0;
for (int i=0; i<10; i++ )    {
if (arr[i]>=max)   {
max = arr[i];      }
                             }
printf("Max: %d\n ", max);
              }
