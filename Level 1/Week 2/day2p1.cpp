# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    // not done 
    for(int i =2; i<=test/2; i++)
    {
        if(!(test%i))
        {
            cout<<"NO\n";
            return 0;
        }
        
    }
    cout<<"YES\n";

}