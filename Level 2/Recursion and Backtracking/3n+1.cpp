# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
long long ans = 1;
void solve(long long num){
    if(num==1){
        return;
    }
    ans++;
    if(num&1) solve(num*3+1);
    else solve(num/2);

}
void awadh_solution(){
    long long num;
    cin>>num;
    solve(num);
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