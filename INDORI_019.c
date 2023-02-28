//4 numbers
// min and max, and mean
// 10,78, 98, 2

#include <stdio.h>


void main() {
// given numbers
int Numbers[] = {10,78,98,2};


int len_of_array = sizeof Numbers / sizeof Numbers[0]; // len of array

//min
int min=Numbers[0];
for (int i=0; i<len_of_array; i++) {
        if (Numbers[i]<=min){
                min=Numbers[i];
        }
        }
printf("min %d\n", min);

//max
int max=Numbers[0];
for (int i=0; i<len_of_array; i++) {
        if (Numbers[i]>=max){
                max=Numbers[i];
        }
        }
printf("max %d\n", max);

//sum of elements
int sum=0;
for (int i=0; i<len_of_array; i++){
        sum+=Numbers[i];
}

// mean = sum/len
float mean = sum/len_of_array;
printf("mean %f\n",mean);
}

