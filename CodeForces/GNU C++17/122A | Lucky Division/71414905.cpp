#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int temp=n;
    int lucky_num[]={4,7,44,47,444,474,477,447,777,774,744,747};
    for(i=0;i<12;i++)
    {
        if(n%lucky_num[i]==0)
        {
       count=1;
           break;
        }else
        {
            count=0;
        }
 
    }
    if(count==1)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
}