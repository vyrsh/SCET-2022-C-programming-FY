#include <stdio.h>

int main() {

  int a,b;
  a=5;
  b=6;
  printf("a=%d \n", a);
  printf("b=%d \n", b);

  // swap
  printf("\nSwapping... \n\n");
  int temp;

  temp = a;
  a = b;
  b = temp;
  
  printf("a=%d \n", a);
  printf("b=%d \n", b);

  return 0;
}
