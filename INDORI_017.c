// 17 generate N fibb sequence

# include <stdio.h>
// fibb
int main() {
 int a=0, b=1; //c= a+b
 int n=0, temp_a=0;
 printf("Enter n: ");
 scanf("%d", &n);
 for (int i = 0; i<=n; i++) {
     printf("%d ", a);
     temp_a=a;
     a=b;
     b=temp_a + b;
}
printf("\n");
}
