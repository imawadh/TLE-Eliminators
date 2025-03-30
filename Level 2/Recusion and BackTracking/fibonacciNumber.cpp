# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}
 
void awadh_solution(){
    cout<<"Enter a number :: ";
    int n;
    cin>>n;
    cout<<"Fibonacci  of " << n << " natural numbers is "<< fib(n)<<'\n';
 
}
 
int main(){
 
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}