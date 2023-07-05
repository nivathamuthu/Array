#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[20],i,j,c=0;
    printf("\n Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf(" element %d ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
            if(c==0)
            {
                printf("%d",a[i]);

            }
        }
    }





