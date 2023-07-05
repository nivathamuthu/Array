#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("\n ENTER A YEAR:");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("\n LEAP YEAR");
    }

    else if(n%400==0)
    {
        printf("\n  A LEAP YEAR");
    }
    else if(n%100==0)
    {
        printf(" b LEAP YEAR");
    }
    else
    {
        printf(" NOT A LEAP YEAR");

    }
}
