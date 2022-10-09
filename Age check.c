#include<stdio.h>
#include<math.h>

int main(){
int age;
int vip;
printf("Enter your age:");
scanf("%d" , &age);
printf("Enter vip age:");
scanf("%d" , &vip);
if((age<=80 && age>=18) || (vip==17))
    {
printf("You are above 18 and below 80 so you can drive\n");
}
else{
printf("You cannot drive");
}
return 0;
}
