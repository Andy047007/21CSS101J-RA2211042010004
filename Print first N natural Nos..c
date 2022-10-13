#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");
    
int n,i;
printf("Enter a number to show natural numbers from 1 to N:");
scanf("%d", &n);

printf("Numbers from 1 to %d are:\n",n);

for(i=1;i<=n;i++)
	printf("%d\n", i);

    return 0;
}
