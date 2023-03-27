#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int count=0,i;
    scanf("%s",a);
    int b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]=='a')
        {
            count++;
        }
    }
    level1:
    if(count<=b/2)
    {
        b=b-1;
        goto level1;
    }else
    {
        printf("%d\n",b);
    }
}