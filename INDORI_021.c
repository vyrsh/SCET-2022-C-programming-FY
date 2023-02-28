
#include <stdio.h>

int main() {
  // get N
  int n;
  printf("Enter N: ");
  scanf("%d", &n);  

  // loop sum
  int sum = 0;
  for (int i=0; i<=n; i++) {
    sum+=i;
  }

  // print result
  printf("Sum: %d \n", sum);
  return 0;
}
