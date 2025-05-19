# include <bits/stdc++.h>
using namespace std;
// solved 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,m;
    cin>>n>>m;
    int ans = 0;
    for(int i= 0; i<32; i++){
        int ct = 0;
        if(n&1){
            ct++;
        }
        if(m&1){
            ct++;
        }
        n = n>>1;
        m = m>>1;
        if(ct==1){
            ans = ans | (1<<i);
        }
    }
    cout<< ans<<'\n';
 
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