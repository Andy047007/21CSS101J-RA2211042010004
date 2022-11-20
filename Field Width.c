#include<stdio.h>
int main(){
    int i;
    printf("number = ");
    scanf("%d", &i);
    printf("%2d field width\n", i);
    printf("%6d field width\n", i);
    printf("%-6d field width\n", i);
}
