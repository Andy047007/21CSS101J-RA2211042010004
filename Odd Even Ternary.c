#include<stdio.h>
int main(){
printf("Registration NO.:RA2211042010004\n");
   
int number;
printf("Enter a number to check for Even / Odd = ");
scanf("%d", &number);
(number%2==0)? printf("%d is Even",number):printf("%d is Odd",number);
return 0;
}
