// 9 write a program to check, the entered char 
// is cap,small or digit, or special char.

#include <stdio.h>

int main() {
  char ch;
  printf("Enter character: ");
  scanf(" %c", &ch);

  if (ch>='a' && ch<='z'){
    printf("Character is Small");
  }
  else if (ch>='A' && ch<='Z'){
    printf("Character is Caps");
  }
  else if (ch>='0' && ch<='9'){
    printf("Character is digit");
  }
  else printf("Character is special");
  printf("\n");
  return 0;
}
