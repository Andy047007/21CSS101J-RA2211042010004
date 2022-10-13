#include<stdio.h>

//To input 3 different integers and find their sum, average, product, smallest and largest number

int main(){

    printf("Registration NO.:RA2211042010004\n");
int x, y, z;
printf("Input three values:");
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &z);

printf("Sum is:%d\n", x+y+z);
printf("Average is:%d\n", (x+y+z)/3);
printf("Product is:%d\n", x*y*z);

//Using if find smallest

if(x<y)
    if(x<z)
        printf("Smallest is:%d\n", x);
if(y<x)
    if(y<z)
        printf("Smallest is:%d\n", y);
if(z<x)
    if(z<y)
        printf("Smallest is:%d\n", z);

//Using if find largest

if(x>y)
    if(x>z)
        printf("Largest is:%d\n", x);
if(y>x)
    if(y>z)
        printf("Largest is:%d\n", y);
if(z>x)
    if(z>y)
        printf("Largest is:%d\n", z);

if(x==y==z)
            printf("All are equal");





}
