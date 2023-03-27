#include<stdio.h>
int main()
{
    int s,t,i;
    scanf("%d %d",&s,&t);
    char sstring[s][20], tstring[t][20];
 
    for(i=0;i<s;i++)
    {
        scanf("%s",sstring[i]);
    }
    for(i=0;i<t;i++)
    {
        scanf("%s",tstring[i]);
    }
    int y,x,z;
    scanf("%d",&y);
    int year[y];
    for(i=0;i<y;i++)
    {
        scanf("%d",&year[i]);
    }
    for(i=0;i<y;i++)
    {
        if(year[i]>=s)
        {
            x=year[i]%s;
            x-=1;
            if(x<0)
            {
                x+=s;
            }
        }else
            {
                x=year[i];
                x-=1;
            }
        if(year[i]>=t)
        {
            z=year[i]%t;
           z-=1;
            if(z<0)
            {
                z+=t;
            }
        }else
            {
                z=year[i];
                z=z-1;
            }
        printf("%s%s\n",sstring[x],tstring[z]);
        //printf("%d %d %d\n",x,z,y);
    }
 
return 0;
}