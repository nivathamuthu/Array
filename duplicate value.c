#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],n,i,j,count=0;
    printf("\n Enter a number of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;

            }

        }
        if(count==0)
        {
            printf("%d",a[i]);


        }
    }
}
