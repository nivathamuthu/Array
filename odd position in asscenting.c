#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[20],b[20],c[20],n,k,l,temp,t;
    printf("\n Enter a value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+2)
    {
        for(j=i+2;j<n;j=j+2)
        {
            if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
        }
    }
    for(i=0;i<n;i=i+2)
    {
        for(j=i+2;j<n;j=j+2)
        {
            if(a[i]<a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
