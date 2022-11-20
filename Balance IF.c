#include<stdio.h>
int main(){
    float balance;
    printf("Enter balance : ");
    scanf("%f", &balance);
    if(balance>1000)
        printf("Sufficient balance\n");
    else
        printf("Balance is low\n");
}
