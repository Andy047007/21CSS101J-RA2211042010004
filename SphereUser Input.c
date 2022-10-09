#include<stdio.h>

int main(){

int radius;

printf("Enter value of radius:");
scanf("%d", &radius);

printf("The volume of sphere is:%f\n", 1.333*3.14*radius*radius*radius);
printf("The TSA of sphere is:%0.2f\n", 4*3.14*radius*radius);
printf("The CSA of sphere is:%0.2f\n", 4*3.14*radius*radius);



}
