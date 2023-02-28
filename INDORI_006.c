// 6 write a program to find out, distance traveled by a vehicle, 
// for time T
// with eqn, dist = u*t + a*t/2 , where u is intital velocity.

#include<stdio.h>
int main(){

 float dist, u, t, a;
 
 printf("\n enter input Initial Velocity: ");
 scanf("%f", &u);

 printf("\n enter time traveled: ");
 scanf("%f", &t);

 printf("\n enter input acceleration: ");
 scanf("%f", &a);
 
 dist = u*t + a*t/2;
 
 printf("distance is %f \n", dist);

}
