/*#include<conio.h>
#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a%9==0)
        printf("9");
    else
        printf("%d",a%9);

}*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,c=0,k;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }

    while(sum>0)
    {
        k=sum%10;
        c=c+k;
        sum=sum/10;

    }
    printf("%d",c);


}
