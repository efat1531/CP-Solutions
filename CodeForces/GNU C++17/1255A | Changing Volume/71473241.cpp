#include<stdio.h>
#include<math.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
       int c=abs(a-b);
       int n=c/5;
       //printf("%d %d\n",c,n);
       n+=(c%5)/2;
      // printf("%d %d\n",c,n);
       n+=((c%5)%2)/1;
      // printf("%d %d\n",c,n);
       printf("%d\n",n);
 
    }
}