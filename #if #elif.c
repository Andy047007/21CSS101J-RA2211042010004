#include<stdio.h>
#if BAACKGROUND == 7
    #define FOREGROUND 0
#elif BACKGROUND == 6
    #define FOREGROUND 1
#else
    #define FOREGROUND 6
#endif
 int main(){
    printf("FOREGROUND value = %d\n", FOREGROUND);
 }
