#include<stdio.h>
int main(){
        int i=1;
        int n;
        printf("Enter upper limit : ");
        scanf("%d", &n);
        printf("The natural numbers from 1 - %d : ",n);
        while(i<=n){
            printf("%d", i);
            i++;
        }
        printf("\n");
}
