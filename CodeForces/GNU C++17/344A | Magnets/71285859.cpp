#include<stdio.h>
int main()
{
 int t,j,i,count=1;
 scanf("%d",&t);
 char mag[t][2];
 for(j=0;j<t;j++)
 {
     scanf("%s",mag[j]);
 }
 for(i=0;i<t;i++)
 {
     if(mag[i][1]==mag[i+1][0])
     {
         count++;
     }
 }
 printf("%d",count);
 
}