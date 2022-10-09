#include<stdio.h>

//User input math operators

int main(){

int x , y;

printf("Enter value of X:\n");
scanf("%d", &x);
printf("Enter value of Y:\n");
scanf("%d", &y);

printf("The sum of x and y is:%d\n", x+y);
printf("The subtraction of x and y is:%d\n", x-y);
printf("The product of x and y is:%d\n", x*y);
printf("The division of x and y is:%d\n", x/y);

return 0;
}
