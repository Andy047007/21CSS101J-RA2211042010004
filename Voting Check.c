#include<stdio.h>
int main (){
printf("Registration NO.:RA2211042010004\n");

    int age;

    printf("Enter Your Age Here:\n");
    scanf("%d",&age);

 if( age >= 18 && age<100 )
  {
     printf("You Are Eligible For Voting\n" );
    }
    else if( age >= 100 )
  {
     printf("You Are Eligible But We Suggest Take a Rest\n" );
    }
    else if(age<18)
    {
     int x;
     x = 18 - age;
     printf("You Are Not Eligible For Voting\n" );
     printf("Wait %d Years For Vote Eligibility \n", x );
    }
  }

