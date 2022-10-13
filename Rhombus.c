#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

int diagonal1;
int diagonal2;
int side;

printf("Enter value of diagonal1:");
scanf("%d", &diagonal1);

printf("Enter value of diagonal2:");
scanf("%d", &diagonal2);

printf("Enter value of side:");
scanf("%d", &side);

float area;
area=(diagonal1*diagonal2)/2;

printf("Area of Rhombus is:%0.2f\n", area);

printf("Perimeter of Rhombus is:%d\n", 4*side);


}
