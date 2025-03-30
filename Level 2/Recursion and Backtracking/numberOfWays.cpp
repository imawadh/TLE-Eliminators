# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

long long solve(long long n){
    if(n==0) return 1;
    if(n<=2) return n;
    if(n==3) return 4;
    return solve(n-1)+solve(n-2)+solve(n-3);
}
 
void awadh_solution(){
    int s,e;
    cin>>s>>e;
    int n = e-s;
    cout<<solve(n)<<'\n';
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}