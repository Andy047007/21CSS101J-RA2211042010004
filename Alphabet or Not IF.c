#include<stdio.h>
int main(){
    char character;
    printf("Enter any character : ");
    scanf("%c", &character);
    if((character>=65&&character<=90)||(character>=97&&character<=122))
        printf("Given character %c is an alphabet\n", character);
    else
        printf("Given character %c is not an alphabet\n", character);
}
