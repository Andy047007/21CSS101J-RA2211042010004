#include<stdio.h>
int main(){
    int *c,*p,*m,chem,phy,math;
    printf("Enter marks (MPC):");
    scanf("%d %d %d",&math,&phy,&chem);

    c=&chem;
    p=&phy;
    m=&math;

    if(*m>*c && *m>*p){
        printf("Maths\n");
    }else if(*c>*m && *c>*p){
        printf("Chemistry");
    }else if(*p>*m && *p>*c){
        printf("Physics");
    }
}
