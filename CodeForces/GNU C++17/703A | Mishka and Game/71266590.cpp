#include<stdio.h>
int main()
{
  int n,i,countm=0,countc=0;
  scanf("%d",&n);
  int m[n],c[n];
  for(i=0;i<n;i++)
    {
        scanf("%d %d",&m[i],&c[i]);
        if(m[i]>c[i])
        {
            countm++;
        }else if(c[i]>m[i])
        {
            countc++;
        }
    }
    if(countm>countc)
    {
        printf("Mishka\n");
    }else if(countc>countm)
    {
        printf("Chris");
    }else if(countm==countc)
    {
        printf("Friendship is magic!^^");
    }
 
}