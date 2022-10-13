#include<stdio.h>

//To find and print the larger integer from user input

int main(){
printf("Registration NO.:RA2211042010004\n");

int x, y;

printf("Enter value of x:");
scanf("%d", &x);

printf("Enter value of y:");
scanf("%d", &y);

if(x>y)
    printf("%d is larger\n", x);
else if(x<y)
        printf("%d is larger\n" , y);
else
printf("These numbers are equal");

}
