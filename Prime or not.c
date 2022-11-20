#include<stdio.h>
int main(){
    int n,i=2,count =0;
    printf("Enter any number : ");
    scanf("%d", &n);
    while (i<=(n/2)){
        if((n%i)==0){
            count++;
        }
        i++;
    }
    if(count==0&&(n!=1)){
        printf("The given number %d is a prime number\n",n);
    }
    else{
        printf("The given number %d is not a prime number\n",n);
        }
}
