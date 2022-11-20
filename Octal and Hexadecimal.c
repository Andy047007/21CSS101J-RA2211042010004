#include<stdio.h>
int main(){
    float d;
    int o,x;
    printf("Enter a decimal integer : ");
    scanf("%f", &d);
    o=d;
    printf("Octal number : %o\n", o);
    x=d;
    printf("Hexadecimal number : %x\n", x);
}
