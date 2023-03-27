#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    char a;
    cin>>a;
    string s;
    if(a=='R')
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            //Right E Shift Hobe;
            if(s[i]=='w')s[i]='q';
            else if(s[i]=='s')s[i]='a';
            else if(s[i]=='x')s[i]='z';
            else if(s[i]=='e')s[i]='w';
            else if(s[i]=='d')s[i]='s';
            else if(s[i]=='c')s[i]='x';
            else if(s[i]=='r')s[i]='e';
            else if(s[i]=='f')s[i]='d';
            else if(s[i]=='v')s[i]='c';
            else if(s[i]=='t')s[i]='r';
            else if(s[i]=='g')s[i]='f';
            else if(s[i]=='b')s[i]='v';
            else if(s[i]=='y')s[i]='t';
            else if(s[i]=='h')s[i]='g';
            else if(s[i]=='n')s[i]='b';
            else if(s[i]=='u')s[i]='y';
            else if(s[i]=='j')s[i]='h';
            else if(s[i]=='m')s[i]='n';
            else if(s[i]=='i')s[i]='u';
            else if(s[i]=='k')s[i]='j';
            else if(s[i]==','||s[i]=='<')s[i]='m';
            else if(s[i]=='o')s[i]='i';
            else if(s[i]=='l')s[i]='k';
            else if(s[i]=='p')s[i]='o';
            else if(s[i]==';')s[i]='l';
            else if(s[i]=='[')s[i]='p';
            else if(s[i]==']')s[i]='[';
            else if(s[i]=='"')s[i]=';';
            else if(s[i]=='/')s[i]='.';
            else if(s[i]=='.')s[i]=',';
          }
    }else
    {
        cin>>s;
        //LEFT E Shift Korbe
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='q')s[i]='w';
            else if(s[i]=='a')s[i]='s';
            else if(s[i]=='z')s[i]='x';
            else if(s[i]=='w')s[i]='e';
            else if(s[i]=='s')s[i]='d';
            else if(s[i]=='x')s[i]='c';
            else if(s[i]=='e')s[i]='r';
            else if(s[i]=='d')s[i]='f';
            else if(s[i]=='c')s[i]='v';
            else if(s[i]=='r')s[i]='t';
            else if(s[i]=='f')s[i]='g';
            else if(s[i]=='v')s[i]='b';
            else if(s[i]=='t')s[i]='y';
            else if(s[i]=='g')s[i]='h';
            else if(s[i]=='b')s[i]='n';
            else if(s[i]=='y')s[i]='u';
            else if(s[i]=='h')s[i]='j';
            else if(s[i]=='n')s[i]='m';
            else if(s[i]=='u')s[i]='i';
            else if(s[i]=='j')s[i]='k';
            else if(s[i]=='i')s[i]='o';
            else if(s[i]=='k')s[i]='l';
            else if(s[i]=='o')s[i]='p';
            else if(s[i]=='p')s[i]='[';
            else if(s[i]=='[')s[i]=']';
            else if(s[i]=='l')s[i]=';';
            else if(s[i]==';')s[i]='"';
            else if(s[i]=='m')s[i]=',';
            else if(s[i]==',')s[i]='.';
            else if(s[i]=='.')s[i]='/';
        }
 
    }
    cout<<s;
 
}