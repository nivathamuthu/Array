#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[20],arr2[20],arr3[30],i,j,n,m,k=0,t=0,count;
    printf("enter a value of arr one:");
    scanf("%d",&n);
    printf("enter a value of arr two:");
    scanf("%d",&m);
    k=n+m;
    for(i=1;i<=n;i++)
    {
            scanf("%d",&arr1[i]);
            arr3[i]=arr1[i];
    }
    printf("enter a value of arr two:");
     for(i=1;i<=m;i++)
    {
            scanf("%d",&arr2[i]);
            arr3[i]=arr2[i];

    }
    for(i=1;i<=n;i++)
    {
            arr3[i]=arr1[i];
            arr3[i+m]=arr2[i];

    }

    printf("\n MERGED ARRAY:");

    for(i=1;i<=k;i++)
    {
         for(j=i+1;j<=k;j++)
         {
        if(arr3[i]>arr3[j])
        {
            t=arr3[i];
            arr3[i]=arr3[j];
            arr3[j]=t;

    }


}
    }
    for(i=1;i<=k;i++)
    {

            printf("%d ",arr3[i]);
    }
    for(i=1;i<=k;i++)
    {
        count=0;
        for(j=i+1;j<=k;j++)
        {
            if(arr3[i]==arr3[j])
            {
                count++;
            }
            if(count==0)
            {
            printf("%d ",arr3[i]);

    }
}


    }
}

