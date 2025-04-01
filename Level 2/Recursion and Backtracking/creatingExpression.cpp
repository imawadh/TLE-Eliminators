# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
bool helper(int i, int sum, vector<int>&v, int x, int n){
    if(i==n){
        return sum == x;
    }
    int summ = helper(i+1,sum+v[i],v,x,n);
    int dif = helper(i+1,sum-v[i],v,x,n);
    return summ||dif;
    
}
 
void awadh_solution(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i =0; i<n; i++)
    {
        cin>>v[i];
    } 
    if(helper(1,v[0],v,x,n)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}