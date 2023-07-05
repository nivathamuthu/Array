/*#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[20],i,j,c=0;
    scanf("%d",&n);

        for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;

        }
        }
    }

    if(c==0)
    {
        printf("false");

    }
    else{
        printf("true");
    }


}*/
//missing array
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[20],i,j,s=0,sum=0;
    scanf("%d",&n);

        for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=n*(n+1)/2;
    for(i=0;i<n-1;i++)
    {
      sum=sum+a[i];
    }

    printf("%d",s-sum);


    }






