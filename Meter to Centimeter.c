#include<stdio.h>

int main(){

float meter;
float centimeter;

printf("Enter value of meter:");
scanf("%f", &meter);

centimeter=meter*100;

printf("%0.2f meter is %0.2f centimeter", meter, centimeter);


}
