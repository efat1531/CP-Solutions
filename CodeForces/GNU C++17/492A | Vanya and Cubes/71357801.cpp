#include<stdio.h>
int main()
{
    int n,i=0,sum=0,elements=0,j;
    scanf("%d",&n);
    int elementsarray[n+1];
    while(elements<=n)
    {
        elements=1+(i-1);
        elementsarray[i]=elements;
        i++;
        //printf("%d\t",elements);
    }
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
           sum+=elementsarray[j];
          // printf("%d\t",sum);
           if(sum>=n)
           {
               break;
           }
       }
       if(sum>=n)
           {
               break;
           }
   }
   if(sum>n)
   {
       i=i-1;
   }else if(i!=j)
   {
       i=i-1;
   }
   printf("%d",i);
}