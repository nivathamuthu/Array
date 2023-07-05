#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],n,i,min,max;

    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];

    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];

    }

     int t=min;
     min=max;
     max=t;

     for(int j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }




}
