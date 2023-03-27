#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    char string[n];
    scanf("%s",string);
    for(i=0;i<n;i++)
    {
        if(string[i]==string[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
}