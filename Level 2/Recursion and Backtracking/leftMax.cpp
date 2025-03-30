# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void solve(vector<int>&v,int n,int i, int m){
    if(i==n){
        return;
    }
    cout<<max(m,v[i])<<' ';
    solve(v,n,i+1,max(m,v[i]));
    
}
 
void awadh_solution(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    solve(v,n,0,v[0]);
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}