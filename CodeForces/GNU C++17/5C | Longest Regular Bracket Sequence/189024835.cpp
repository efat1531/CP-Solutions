#include<bits/stdc++.h>
using namespace std;
 
void print(stack<int>an)
{
    while(!an.empty())
    {
        cout<<"ANSWER -> "<<an.top()<<endl;
        an.pop();
    }
    cout<<endl<<endl;
}
 
int main()
{
    stack<char>st;
    stack<int>answer;
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            answer.push(1);
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
                int a=0;
                bool is_found=false;
                if(answer.top()==1)
                {
                    answer.pop();
                    answer.push(2);
                }else
                {
                    is_found=true;
                    a=2;
                }
                //cout<<"I ran from"<<endl;
                while(!answer.empty())
                {
                    if(answer.top()==1)
                        break;
                    a+=answer.top();
                    answer.pop();
                }
                if(is_found and (!answer.empty()))
                    answer.pop(),is_found=false;
                answer.push(a);
            }else
                answer.push(1);
        }
       // print(answer);
    }
    vector<int>v;
    while(!answer.empty())
    {
        int a=answer.top();
        //cout<<"A-> "<<a<<endl;
        answer.pop();
        if(a>1)
            cnt+=a;
        else
        {
            if(cnt)
            {
                v.push_back(cnt);
                cnt=0;
            }
        }
    }
    if(cnt)
    {
        v.push_back(cnt);
            cnt=0;
    }
    if(v.size()==0)
    {
        cout<<0<< " "<<1<<endl;
        return 0;
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[0])
            cnt++;
    }
    cout<<v[0]<<" "<<cnt<<endl;
    return 0;
 
}