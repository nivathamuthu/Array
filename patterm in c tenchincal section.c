#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,s=0,s1=0,a[20],d;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else
        {
            s1=s1+a[i];
        }
    }
            printf("%d\n",s);
            printf("%d\n",s1);
            d=s1-s;
            printf("%d",d);

    }












