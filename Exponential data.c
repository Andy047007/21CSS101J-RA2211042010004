#include<stdio.h>
int main(){
    float num1=5.34,num2=125.789f,result;
    printf("Given float value are num1=%d, num2=%d\n", num1,num2);
    result=num1/num2;
    printf("The result after dividing in float format = %f\n", result);
    printf("The result after dividing in exponential format = %e\n", result);

}
