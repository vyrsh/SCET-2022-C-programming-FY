#include <stdio.h>
#include <conio.h>



void swap(int *a, int*b) {
	int temp = *a;
	*a = *b;
	*b = temp;
		       }

// sort using pointer
void sort(int a[]) {
	int max = 0;
	for (int j=0; j<5; j++)
	{
		max=j;
		for (int i=j+1; i<5; i++)
		{
			if (*(a+i)<*(a+max))
			{
				max = i;
			}
		}
		swap(&a[j],&a[max]);

	}

}

void main() {

	int arr[5] = {1,66,22,34,9};
	clrscr();
	sort(arr);
	//swap(&arr[0], &arr[1]);
	// print array
	for (int i=0; i<5; i++) {
		printf("%d ", arr[i]);
	}


	getch();
	}