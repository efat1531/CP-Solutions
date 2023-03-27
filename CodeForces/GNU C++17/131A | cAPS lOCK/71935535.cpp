#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string  a;
int c=0,i=1;
cin>>a;
while(a[i]!='\0')
{
    if(a[i]<91) c++;
else
break;
i++;
}
 
if(a[c+1]=='\0'){
i=1;
while(a[i]!='\0') {a[i]=a[i]+32; i++;}
if(a[0]>90) a[0]=a[0]-32;
else a[0]=a[0]+32;
}
cout<<a;
}