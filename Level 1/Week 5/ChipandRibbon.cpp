# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        int m = INT_MIN;
        long long ans = 0;
        vector <int> ans_v;
        
        for(int i =0; i<size; i++)
        {
            if(v[i]>m)
            {
                m = v[i];
            }
            if(v[i]==0)
            {
                // cout<<m<<' ';
                ans_v.push_back(m);
                m = INT_MIN;
            }
        }
        if(m!=0 && m!=INT_MIN) ans_v.push_back(m);
        for(int i =0; i<ans_v.size(); i++)
        {
            ans+=ans_v[i];
            if(i==0)
            {
                ans--;
            }
            
            
        }
       
        
        
        cout<<ans<<'\n';
    }
}
