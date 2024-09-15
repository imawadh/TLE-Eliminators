# include <bits/stdc++.h>
using namespace std;
// TLE
int maximum (vector <int> v){
    int max=-1;
    for(int i =0; i<v.size(); i++)
    {
        if(v[i]>max && v[i]%2==0)
        {
            max = v[i];
        }
    }
    return max;
}
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
        int max = maximum(v);
        int ans = 0;
        while(max!=-1)
        {
            // cout<<max<<' ';
            for(int i =0; i<v.size(); i++)
            {
                if(v[i]==max)
                {
                    v[i]=v[i]/2;
                    
                }
            }
            ans++;         
            max = maximum(v);
        }
        cout<<ans<<'\n';

    }
}