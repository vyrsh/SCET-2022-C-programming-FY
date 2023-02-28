// 13 write a program to read number 1 to 7 and bring relatively day sunday to satuday USING SWITCH CASE

#include <stdio.h>
void main () {
	int day;
	printf("enter day num: ");
	scanf("%d", &day);


	switch (day){
    case 1:
	printf("Monday");
	break;
	case 2:
	printf("Tuesday");
	break;
	case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	break;
	case 5:
	printf("friday");
	break;
	case 6:
	printf("saturday");
	break;
	case 7:
	printf("sunday");
	break;
	default:
	printf("Number not between 1 and 7");
	}
printf("\n");
	}
