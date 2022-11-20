#include<stdio.h>
#if defined (MAX)
    #define MIN 20
#else
    #define MAX 100
    #define MIN 200
#endif
int main(){
        printf("MAX value = %d, MIN value = %d\n", MAX, MIN);
}
