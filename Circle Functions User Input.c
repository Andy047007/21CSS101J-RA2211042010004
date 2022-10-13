#include<stdio.h>

//Input radius of circle and find circumference, diameter and area by doing calculation in printf statements

int main(){
  printf("Registration NO.:RA2211042010004\n");

int radius;

printf("The radius is:");
scanf("%d", &radius);

printf("The diameter is:%d\n", 2*radius);
printf("The circumference is:%f\n", 2*3.14159*radius);
printf("The area is:%f\n", radius*radius*3.14159);


}
