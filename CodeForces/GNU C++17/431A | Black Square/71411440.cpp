#include<stdio.h>
#include<string.h>
int main()
{
    int a[4];
    int i,c,j,sum=0;
    char b[100000];
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%s",b);
    c=strlen(b);
    int d[c];
    //printf("%d",c);
    for(j=0;j<c;j++)
    {
        d[j]=(b[j]-'0');
        sum+=a[d[j]-1];
    }
    printf("%d",sum);
}