#include<stdio.h>
#include<conio.h>
void main()
{
    char n[20],m[20];
    int count,len1,len2,i,j;
    printf("\nEnter a string 1: ");
    scanf("%s",&n);
    printf("\nEnter a string 2: ");
    scanf("%s",&m);
    len1=strlen(n);
    len2=strlen(m);
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            for(j=0;j<len2;j++)
            {
                if(n[i]==m[j])
                {
                    m[j]='*';
                    count++;
                    break;

                }
            }
        }
                if(count==len1)
                {
                    printf("Its is a anagram");

                }
                else
                {
                    printf("Its a not anagram");
                }

            }
        }





