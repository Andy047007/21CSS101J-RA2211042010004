#include<stdio.h>

//To check if one integer is multiple of the other

int main(){

int x , y;

printf("Enter value of x:\n");
scanf("%d", &x);
printf("Enter value of y:\n");
scanf("%d", &y);

if(x%y==0)
    printf("%d is multiple of %d ", x, y);
else
    printf("%d is not multiple of %d", x, y);

}
