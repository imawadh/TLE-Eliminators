# include <bits/stdc++.h>
using namespace std;
// solved 
bool check_prime(long long a, long long b)
{
    long long c = a+b;
    a = sqrt(c)+1;
    b = 2;
    while(b<=a)
    {
        if(c%b==0)
        {
            return false;
        }
        b++;
    }
    return true;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long  a,b;
        cin>>a>>b;
        if(a-b==1)
        {
            if(check_prime(a,b))
            {
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else{
            cout<<"No\n";
        }
    }
}