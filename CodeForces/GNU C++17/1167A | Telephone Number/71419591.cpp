#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    int testcase[t];
    for(j=0;j<t;j++)
    {
        int n,i;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        if(n<11)
        {
            printf("NO\n");
        }else if(n>11)
        {
            for(i=-0;i<n;i++)
            {
                if(s[i]=='8')
                {
                    break;
                }
            }
          //  printf("%d\n",i);
          if(n-(i+1)>=10)
          {
              printf("YES\n");
          }else
          {
              printf("NO\n");
          }
        }else
        {
            if(s[0]=='8')
            {
                printf("YES\n");
            }else
            {
                printf("NO\n");
            }
        }
    }
}