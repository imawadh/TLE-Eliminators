# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int a,b;
    cin>>a>>b;
    vector <long long> v(a);
    long long ans = INT_MAX;
    bool flag = false;
    for(int i =0; i<a; i++)
    {
        cin>>v[i];
        if(v[i]%b==0)
        {
            flag = true;
        }
        if(!flag){
        int d = v[i]/b;
        d++;
        ans = min(d*b-v[i],ans);
        }

    }
    if(flag) {
        cout<<0<<'\n';
        return;
    }
    if(b==4)
    {
        int ct0  = 0;
        int ct1 = 0;
        int ct3 = 0;
        for(int i =0; i<a; i++)
        {
            if(v[i]%2==1)
            {
                ct1++;
            }
            else{
                ct0++;
            }
            if(v[i]%4==3)
            {
                ct3++;
            }
            
        }
        
        if(ct0>=2)
        {
            cout<<0<<'\n';
            return;
        }
        if((ct0>=1 && ct1>=1) || ct3>=1)
        {
            cout<<1<<'\n';
            return;
        }

        if(ct1>=2)
        {
            cout<<2<<'\n';
            return;
        }
    }
    cout<<ans<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       awadh_solution();
    }
}