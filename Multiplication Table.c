#include<stdio.h>

int main()
{
    int i,a,n;
    printf("Enter the Number whose Table you want to Print: \n");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        a=n*i;
        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}
