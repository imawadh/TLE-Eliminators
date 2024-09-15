# include <bits/stdc++.h>
using namespace std;
int check(long long num)
{
    if(num&1) return true;
    int x = sqrt(num)+1;
    for(int i = 3; i<=x; i+=2)
    {
        if(num%i==0)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long size;
        cin >>size;
        long long x = check(size);
        cout<<x<<'\n';
        // if(check(size)) cout<<"YES\n";
        // else cout<<"NO\n";
        
    }
}