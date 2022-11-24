#include <stdio.h>

int main()
{
    char C;
    int count;
    printf("1. Lowercase to Uppercase\n 2. Uppercase to Lowercase\n Enter your option : ");
    scanf("%d", &count);
    switch (count){
        case 1:
        printf("Enter a lowercase character : ");
        scanf("%c", &C);
        printf("Value of c=%c",C);
         if ('C'>=97&&'C'<=127)
    {
        printf("Uppercase character : %c", 'C'-32);
    }

        break;
        case 2:
        printf("Enter an uppercase character : ");
        scanf("%c", &C);
        break;
        default:
        printf("Please enter a valid option : ");
        break;
    }
    if ('C'>=97&&'C'<=172)
    {
        printf("Uppercase character : %c", 'C'-32);
    }

}
