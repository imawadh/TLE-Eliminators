# include <bits/stdc++.h>
using namespace std;
int main(){
    int k,s;
    cin>>k>>s;
    // if(s==0 && k==0)
    // {
    //     cout<<1;
    // }
    // else if(k*3<s)
    // {
    //     cout<<0<<'\n';
    // }
    // else if(s==1)
    // {
    //     cout<<3;
    // }
    // else{
    //     cout<<(min(k,s)+1)*3;
    // }
    if(k<=s)
    {
        cout<<k*3;
    }
    else{
        cout<<(s+1)*3;
    }
}