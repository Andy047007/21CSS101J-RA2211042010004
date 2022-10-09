#include<stdio.h>

int main(){

float meter;
float yard;

printf("Enter value of yard:");
scanf("%f", &yard);

meter=yard/0.914;

printf("%0.3f yards is %0.3f meter", yard, meter);


}
