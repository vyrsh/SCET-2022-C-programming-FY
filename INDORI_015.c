// 15 write a program to cehck the entered caracter is vowel or not using switch case


#include <stdio.h>

int main()
{

	char input;
	printf("Enter character: ");
  scanf(" %c", &input);

	switch(input)
	{
  case 'a':
		printf("Vowel\n");
		break;
	
  case 'e':
		printf("Vowel\n");
		break;

  case 'i':
		printf("Vowel\n");
		break;

  case 'o':
		printf("Vowel\n");
		break;

  case 'u':
		printf("Vowel\n");
		break;

  default:
		printf("Consonant\n");
		break;
	}
	return 0;
}
