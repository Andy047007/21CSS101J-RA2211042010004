#include<stdio.h>
int main(){
    volatile int num1=15;
    int num2=12;
    num2=num1;
    num1=num1+1;
    printf("%d %d\n", num1,num2);


}
