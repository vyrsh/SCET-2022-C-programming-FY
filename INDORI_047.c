// 47 define a structure called personal, this structure, write a program to read personal information of 5 people and print the same on
screen.

#include<stdio.h>

typedef struct time_struct {
	int year;
	int month;
	int day;
};

typedef struct personal {
	char name[10];
	struct time_struct doj;
	int salary;
};


int main() {
	struct personal ps[5];
	
	// read personal
	for (int i=0; i<5; i++) {
		printf("Person %d\n",i+1);
		
		printf("enter name: ");
		scanf("%s", ps[i].name); 
		
		//////
		printf("enter date of join\n");
		printf("enter year(yyyy): ");
		scanf("%d", &ps[i].doj.year);
		
		printf("enter month(mm): ");
		scanf("%d", &ps[i].doj.month);
		
		printf("enter day(dd): ");
		scanf("%d", &ps[i].doj.day);
		
		//////
		printf("enter salary: ");
		scanf("%d", &ps[i].salary);
	}
	
	for (int i=0; i<5; i++) {
		printf("Person %d\n",i+1);
		printf("Name: %s\n", ps[i].name);
		printf("Salary: %d\n", ps[i].salary);
		printf("Date of join(dd/mm/yyyy): %d/%d/%d\n", ps[i].doj.day, ps[i].doj.month, ps[i].doj.year);
				
	}
}
