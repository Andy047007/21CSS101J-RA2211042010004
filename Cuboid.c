#include<stdio.h>

int main(){

int length=5;
int width=7;
int height=9;

printf("The TSA of Cuboid is:%d\n", 2*(length*width+width*height+length*height));
printf("The LSA of Cuboid is:%d\n", 2*height*(length+width));
printf("The volume of Cuboid is:%d\n", length*height*width);

}
