#include <stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

  int meters;
  float feet;

  printf("Enter the value for meters=");
  scanf("%d", &meters);

  feet = meters * 3.28084;

  printf("%d meters are equal to %.2f feet", meters, feet);

  return 0;
}
