# include <bits/stdc++.h>
using namespace std;
// TLE 
bool check(long long num)
{
    if(num&1) return true;
    int x = sqrt(num)+1;
    for(int i = 3; i<=x; i+=2)
    {
        if(num%i==0)
        {
            return true;
        }
    }
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