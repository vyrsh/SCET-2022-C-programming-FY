// 5 write a program to enter distance in KM,
// convert to metre, feet, inches, CM


#include<stdio.h>
void main(){

int KM, METER, CM, FEET, INCHES;
printf("\nEnter the distance in kilometers:");
scanf("%d",&KM);

METER=KM*1000;
CM=METER*100;
FEET=KM*3280.8399;
INCHES=CM*0.393701;

printf("distance in feet is %d\n",FEET);
printf("distance in CM is %d\n",CM);
printf("distance in METER is %d\n",METER);
printf("distance in INCHES is %d\n",INCHES);
};
