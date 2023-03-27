#include<stdio.h>
int main()
{
  int n,i,count=0,k;
  scanf("%d %d",&n,&k);
  int y[n];
  for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        if((y[i]+k)<=5)
        {
            count++;
        }
    }
    printf("%d",count/3);
 
 
}