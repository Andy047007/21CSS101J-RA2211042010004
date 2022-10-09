#include<stdio.h>

int main(){

float kilometer;
float meter;

printf("Enter value of kilometer:");
scanf("%f", &kilometer);

meter=kilometer*1000;

printf("%0.2f kilometer is %0.2f meter", kilometer , meter);


}
