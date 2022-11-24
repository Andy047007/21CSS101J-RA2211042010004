#include<stdio.h>

void swap(int *,int *);

void main(){

    int a=10,b=20;
    int *x,*y;
    x=&a;
    y=&b;
   // printf("Enter x and y : ");
    //scanf("%d %d",&x,&y);
    printf("Before swapping X:%d Y:%d\n",*x,*y);
    swap(x,y);

    //printf("After swapping X:%d and Y:%d\n",x,y);

    //return swap;

}

void swap(int *x,int *y){
    int temp= *x;
    *x=*y;
    *y= temp;

    printf("After swapping X:%d and Y:%d\n",*x,*y);
    //return swap;
}
