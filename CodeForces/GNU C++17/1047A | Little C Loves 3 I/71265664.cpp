#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n%3==0)
    {
        n=n/3;
        if(n%3==0)
        {
            printf("%lld %lld %lld",n-1,n+2,n-1);
        }else
        {
            printf("%lld %lld %lld",n,n,n);
        }
    }else if((n-1)%3==0)
    {
        n=(n-1)/3;
        if(n%3==0)
        {
            printf("%lld %lld %lld",n-1,n-2,n+4);
        }else
        {
            if((n+1)%3==0)
            {
                printf("%lld %lld %lld",n,n-1,n+2);
            }else
            {
                printf("%lld %lld %lld",n,n,n+1);
            }
        }
    }else if((n-2)%3==0)
    {
        n=(n-2)/3;
        if(n%3==0)
        {
            printf("%lld %lld %lld",n-1,n-1,n+4);
        }else
        {
            if((n+2)%3==0)
            {
                printf("%lld %lld %lld",n,n+1,n+1);
            }else
            {
                printf("%lld %lld %lld",n,n,n+2);
            }
        }
    }
}