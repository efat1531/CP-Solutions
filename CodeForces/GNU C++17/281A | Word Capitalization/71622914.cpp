#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int b=strlen(a);
    int i,c;
    c=a[0];
    if(c>=97&&c<=122)
    {
       a[0]=65+(c-97);
    }
    for(i=0;i<b;i++)
    {
        printf("%c",a[i]);
    }
 
return 0;
}