#include<stdio.h>
int main()
{
    int sum[4];
    int i,j,A,B,C;
    for(i=0;i<4;i++)
    {
        scanf("%d",&sum[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(sum[i]<sum[j])
            {
                int temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    A=sum[3]-sum[0];
    B=sum[3]-sum[1];
    C=sum[3]-sum[2];
    printf("%d %d %d",A,B,C);
}