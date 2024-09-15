# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ct = 0;
    bool flag = false;
    while(ct*b<=a)
    {
        if((a-b*ct)%c==0)
        {
            cout<<"YES"<<'\n';
            flag=true;
            cout<<ct<<' '<<(a-b*ct)/c<<'\n';
            break;
        }
        ct++;
    }
    if(!flag )
    {
        cout<<"NO\n";
    }
}