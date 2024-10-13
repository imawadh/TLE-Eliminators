# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin >>n>>k;
        string v[n];
        int ans=0;
        for (int i =0; i<n; i++){
            cin>>v[i];
            if(v[i]==v[0])
            {
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
}