#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

int side1 , side2, base, height;

printf("Enter value of Side1 and Side2:\n");
scanf("%d , %d", &side1, &side2);

printf("Enter value of Base:\n");
scanf("%d", &base);

printf("Enter value of Height:\n");
scanf("%d", &height);

printf("The area of Triangle is:%0.2f\n", base*height*0.5);

printf("The perimeter of triangle is:%d", side1+side2+base);


}
