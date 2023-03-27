#include<stdio.h>
int main()
{
  int k,i,j,sum=0;
  scanf("%d",&k);
  int year[12];
  for(i=0;i<12;i++)
  {
      scanf("%d",&year[i]);
      sum+=year[i];
 
  }
  for(i=0;i<12;i++)
  {
      for(j=0;j<12;j++)
      {
          if(year[i]>year[j])
          {
              int temp=year[i];
              year[i]=year[j];
              year[j]=temp;
          }
      }
  }
  /*for(i=0;i<12;i++)
  {
      printf("%d\t",year[i]);
  }*/
  if(sum>=k)
  {
      int sum2=0;
      i=0;
      while(sum2<k)
      {
          sum2+=year[i];
          i++;
         // printf("%d\n",sum2);
      }
      printf("%d",i);
  }else
  {
      printf("-1");
  }
 
}