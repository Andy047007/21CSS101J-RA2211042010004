#include<stdio.h>

//To add parameters to myFunction

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
printf("Registration NO.:RA2211042010004\n");

  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
