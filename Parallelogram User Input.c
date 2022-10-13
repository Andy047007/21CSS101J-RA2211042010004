#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

int base;
int length;
int height;

printf("Enter the value of base:");
scanf("%d", &base);

printf("Enter the value of length:");
scanf("%d", &length);

printf("Enter the value of height:");
scanf("%d", &height);

printf("The area of parallelogram is:%d\n", base*height);
printf("The perimeter of parallelogram is:%d\n", 2*(length+base));


}
