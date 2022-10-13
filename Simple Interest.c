#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

   float amount=50, rate=10, time=20, si;

   printf("Principal Amount : 50\n");

   printf("Rate of Interest :10\n ");

   printf("Period of Time:20\n ");

   si = (amount * rate * time) / 100;
   printf("Simple Interest : %f\n", si);

   return(0);
}
