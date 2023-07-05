#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[20],i;
    printf("\n Enter a value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("\n Element%d:",i);
        scanf("%d",&a[i]);
    }
        int max=a[0];
        for(i=0;i<n;i++)
        {
        if(a[i]>max)
        {
            max=a[i];
        }
        }
        printf("\n the value of %d is greater",max);
        }




