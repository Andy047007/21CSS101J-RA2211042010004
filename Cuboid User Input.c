#include<stdio.h>

int main(){

int length;
int width;
int height;

printf("Enter value of length:");
scanf("%d", &length);

printf("Enter value of width:");
scanf("%d", &width);

printf("Enter value of height:");
scanf("%d", &height);

printf("The TSA of Cuboid is:%d\n", 2*(length*width+width*height+length*height));
printf("The LSA of Cuboid is:%d\n", 2*height*(length+width));
printf("The volume of Cuboid is:%d\n", length*height*width);


}
