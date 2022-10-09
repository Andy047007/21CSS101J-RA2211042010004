 #include<stdio.h>

 int main(){

 float meter;
 int feet;

 printf("Enter value of feet:");
 scanf("%d", &feet);

 meter= feet/3.808;

 printf("%d feet is equal to %0.2f meter", feet , meter);

 }
