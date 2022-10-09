#include<stdio.h>

int main(){

   float amount, rate, time, si;

   printf("Enter Principal Amount :\n ");
   scanf("%f", &amount);

   printf("Enter Rate of Interest :\n ");
   scanf("%f", &rate);

   printf("Enter Period of Time :\n ");
   scanf("%f", &time);

   si = (amount * rate * time) / 100;
   printf("Simple Interest : %f\n", si);

   return(0);
}
