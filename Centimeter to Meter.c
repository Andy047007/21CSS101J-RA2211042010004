#include<stdio.h>

int main(){

float centimeter;
float meter;

printf("Enter value of centimeter:");
scanf("%f", &centimeter);

meter=centimeter/100;

printf("%f centimeter is %0.3f meter", centimeter, meter);

}
