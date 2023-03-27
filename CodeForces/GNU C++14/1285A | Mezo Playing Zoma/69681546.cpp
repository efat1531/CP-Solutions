#include<stdio.h>
int main()
{
    int x,n,i;
    scanf("%d",&n);
    x=n;
    char lenth[n];
  for(i=0;i<n;i++)
  {
      scanf("%s",&lenth[i]);
  }
    if(lenth[n-1]=='R')
    {
        x+=1;
    }
    /*else if(lenth[n-1]=='L')
    {
        x-=1;
    }*/
    else
    {
        x+=1;
    }
    printf("%d\n",x);
 
 
    return 0;
}