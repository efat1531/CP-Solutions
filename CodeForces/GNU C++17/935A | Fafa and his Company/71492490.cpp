#include<stdio.h>
int main()
{
    int n,count=0,i=1;
    scanf("%d",&n);
    int temp=n;
 
        while(i<=(n/2)&&temp>0)
        {
            temp=n-i;
            if(temp%i==0)
            {
                count++;
            }
            //printf("%d %d %d\n",i,temp,count);
            i++;
        }
        printf("%d",count);
}
 