# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}
 
void awadh_solution(){
    cout<<"Enter a number :: ";
    int n;
    cin>>n;
    cout<<"Sum of " << n << " natural numbers is "<< sum(n)<<'\n';
 
}
 
int main(){
 
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}