# include <bits/stdc++.h>
using namespace std;
int main(){
    // int test;
    // cin>>test;
    // while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
     
        long long ans = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            
        }
        sort(v.begin(),v.end());
         for (int i =0; i<size ; i++){
            cout<<v[i]<<' ';
            
        }
    // }
}