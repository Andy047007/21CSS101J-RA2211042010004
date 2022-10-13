#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

int length , breadth;

printf("Enter value of Length:\n");
scanf("%d", &length);
printf("Enter value of Breadth:\n");
scanf("%d", &breadth);

printf("The Perimeter of Rectangle is:%d\n", 2*(length+breadth));
printf("The Area of Rectangle is:%d\n", length*breadth);

return 0;

}
