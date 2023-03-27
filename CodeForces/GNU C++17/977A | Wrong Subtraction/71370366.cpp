#include<stdio.h>
int main()
{
    long long int n;
    int k,count=0,i;
    scanf("%lld",&n);
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n=n/10;
            count++;
        }else
        {
            n-=1;
            count++;
        }
    }
    printf("%lld",n);
}