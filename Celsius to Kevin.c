#include<stdio.h>

int main(){

float celsius;
float kelvin;

printf("Enter value of Celsius:");
scanf("%f", &celsius);

kelvin=celsius-273.15;

printf("%0.2f Celsius is %0.2f Kelvin", celsius , kelvin);


}
