# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
long long ans = 0;
int helper(int i, int n, int leftWeight, vector <vector<int>> &v){
    if(i>=n){
        return 0;
    }
    if(leftWeight>=v[i][0]){
        return max(v[i][1]+helper(i+1,n,leftWeight-v[i][0],v),helper(i+1,n,leftWeight,v));
    }
    else{
        return helper(i+1,n,leftWeight,v);
    }

}
 
void awadh_solution(){
    int n,w;
    cin>>n>>w;
    vector <vector<int>> v(n,vector<int>(2));
    for(int i =0; i<n; i++){
        cin>>v[i][0]>>v[i][1];
    }
    cout<<helper(0,n,w,v)<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}