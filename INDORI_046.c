// 46 Define a structure data type called time_struct containing three  - integer hour, integer
// minute and integer second. Develop a program that would assign values to the individual
// number and display the time in the format: (16: 40: 51).

#include<stdio.h>

typedef struct time_struct {
	int hour;
	int minute;
	int second;
};

int main() {
	struct time_struct apple;
	apple.hour = 16;
	apple.minute = 40;
	apple.second = 51;

	printf("(%d: %d: %d)\n", apple.hour, apple.minute, apple.second);
}
