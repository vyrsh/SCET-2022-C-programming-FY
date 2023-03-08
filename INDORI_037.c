// 39 Write a program to find out which number is even or odd from list of 10 numbers using an array.

#include <stdio.h>

int main() {
	 int nums[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0; i<10; i++) {
		if (0==nums[i]%2)
			printf("%d is even\n",nums[i]);
		else
			printf("%d is odd\n",nums[i]);
	}

}
