#include<stdio.h>
int main(){
int num;
printf("Enter a:");
scanf("%d" , &num);
//Ternary Operator ? and :
(num<5)?printf("A is less than 5") : printf("A is greater than 5");
}
