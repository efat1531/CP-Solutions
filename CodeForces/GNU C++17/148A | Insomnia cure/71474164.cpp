#include<stdio.h>
#include<math.h>
int main()
{
  int k,l,m,n,d,i,count=0;
  scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
  int a[d];
  for(i=0;i<d;i++)
  {
      a[i]=i+1;
      //printf("%d\n",a[i]);
      if(a[i]%k==0||a[i]%l==0||a[i]%m==0||a[i]%n==0)
      {
          //printf("0-%d\n",a[i]);
          a[i]=0;
      }
      if(a[i]!=0)
      {
          //printf("!=%d\n",a[i]);
          count++;
      }
  }
 
  count=d-count;
  printf("%d",count);
}