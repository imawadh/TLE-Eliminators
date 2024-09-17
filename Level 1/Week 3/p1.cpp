# include <bits/stdc++.h>
using namespace std;
//solved
int main(){
    int test;
    cin>>test;
    cout<<21+test/60<<":";
    if(test%60<=9)
    {
        cout<<0;
    }
    cout<<test%60<<'\n';
}