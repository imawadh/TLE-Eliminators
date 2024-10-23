# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        int m = INT_MAX;
        long long ans = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(v[i]<m)
            {
                m = v[i];
            }
        }
        for (int i =0; i<size ; i++){
            if(v[i]>m)
            {
                ans+=(v[i]-m);
            }
        }
        cout<<ans<<'\n';
    }
}