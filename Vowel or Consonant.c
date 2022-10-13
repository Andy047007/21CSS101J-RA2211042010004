#include <stdio.h>
int main() {
printf("Registration NO.:RA2211042010004\n");
    char c;
    int lowercase_vowel, uppercase_vowel;

printf("Enter an alphabet: ");
scanf("%c", &c);

lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

if (lowercase_vowel || uppercase_vowel)
    printf("%c is a vowel.", c);
else
    printf("%c is a consonant.", c);
}
