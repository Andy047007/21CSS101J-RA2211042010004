#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

int base1;
int base2;
int height;
float area;

printf("Enter value of base1 of Trapezium:");
scanf("%d", &base1);

printf("Enter value of base2 of Trapezium:");
scanf("%d", &base2);

printf("Enter value of height of Trapezium:");
scanf("%d", &height);

area=(base1+base2)*height/2;

printf("The Area of Trapezium is:%0.2f", area);

int side1, side2;

printf("Enter value of side1 and side2:");
scanf("%d,%d", &side1,&side2);

printf("The Perimeter of Trapezium is:%d", side1+side2+base1+base2);
}
