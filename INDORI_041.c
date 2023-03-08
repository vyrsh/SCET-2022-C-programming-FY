// 41 Write a program to sort given array in ascending order. (Use Selection sort).

// use max func from 19
// shift max to 0, then 2nd max to 1 and so on.

#include <stdio.h>

int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main() {
	int array[10] = {4,7,2,19,9,11,5,3,6,8};
	int max = 0;
	int temp = 0;
	for (int i=0; i<10-1; i++) {
		// find max
		for(int a=i+1; a<10; a++) {
			if (array[a]>array[max])
				max=a;
		}
		// shift max into sub array
		swap(&array[i], &array[max]);
	}

	// print array
	for(int i=0; i<10;i++)
		printf("%d ", array[i]);
}
