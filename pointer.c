#include<stdio.h>
int main(){
  int *a,*b,sum,p,q;
  printf("Enter two numbers : ");
  scanf("%d %d",&p,&q);
  a=&p;
  b=&q;

  //int *aptr,*bptr,*sumptr;
  sum=*a+*b;

  printf("Sum : %d",sum);

}
