#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    ch=getchar();
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        printf("Given character %c is an alphabet", ch);
    else if(ch>='0'&&ch<='9')
        printf("Given character %c is a digit", ch);
    else
        printf("Given character %c is neither a digit or an alphabet", ch);
}
