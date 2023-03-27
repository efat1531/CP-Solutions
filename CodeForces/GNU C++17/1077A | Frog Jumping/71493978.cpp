#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    int testccase[t];
    for(i=0;i<t;i++)
    {
        long long int a,b,k,aj,bj;
        scanf("%lld %lld %lld",&a,&b,&k);
        if(k%2==0)
        {
            aj=a*(k/2);
            bj=b*(k/2);
            printf("%lld\n",aj-bj);
        }else
        {
            aj=a*((k+1)/2);
            bj=b*(k/2);
            printf("%lld\n",aj-bj);
        }
    }
}