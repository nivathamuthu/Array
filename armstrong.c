#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n,sum=0,r,t;
    printf("\n Enter a number:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    printf("%d",sum);
    if(t==sum)
    {
        printf("\n ARMSTRONG");
    }
    else{
        printf("\n NOT A AMSTRONG");
    }

}
