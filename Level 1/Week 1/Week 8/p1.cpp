# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<'\n';
        }
        else{
            cout<<b*((a/b)+1)-a<<'\n';
        }
    }
}