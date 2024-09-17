# include <bits/stdc++.h>
using namespace std;
// solved 
bool check(long long num)
{
    if(num&1) return true;
    while(num%2==0)
    {
        num/=2;
    }
    if(num&1 && num!=1) return true;
    return false;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long size;
        cin >>size;
        if(check(size)) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}