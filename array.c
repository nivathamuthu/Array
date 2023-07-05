#include<stdio.h>
int main()
{
    int n,a[20],i,j,k,t;
    printf("Enter a number:");
    scanf("%d",&n);
    t=10;
    for(i=0;i<n;i++)
    {

    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                printf("pair found %d,%d",a[i],a[j]);
                }
            else
            {
                printf("pair not found");
            }

        }
    }
}

