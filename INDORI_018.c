// 18 n factorial
# include <stdio.h>
int main() {
    int fact = 1;
    int no;
    
    printf("Enter n: ");
    scanf("%d", &no);
    
    for (int i=1; i<= no; i++)
    { 
        fact=fact*i;
    }    
 printf("%d\n", fact);
 
}
