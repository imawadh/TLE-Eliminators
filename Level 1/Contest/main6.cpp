# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;


void awadh_solution(){
    int a;
    cin>>a;
    int c,d;
    map <int,int> m;
    long long ans = 0;
    for(int i =0; i<a; i++)
    {
        cin>>c>>d;
        if(m[c])
        {
            ans += max(m[c],d);
            ans -= m[c];
            m[c]=max(m[c],d);
        }
        else{
            ans += (d);
            m[c]=d;   
        }
    }
    cin>>a;
    for(int i =0; i<a; i++)
    {
        cin>>c>>d;
        if(m[c])
        {
            ans += max(m[c],d);
            ans -= m[c];
            m[c]=max(m[c],d);
        }
        else{
            ans += (d);
            m[c]=d;   
        }
    }
    cout<<ans<<'\n';

 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}