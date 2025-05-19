# include <bits/stdc++.h>
using namespace std;
// accepted 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

int helper(int num){
    if(num==0){
        return 0;
    }
    int n = num;
    int ct = 0;
    while(n){
        n = n>>1;
        ct++;
    }


    return 1 + helper(num-(1<<(ct-1)));
}
void awadh_solution(){
    int num;
    cin>>num;
    cout<<helper(num)<<'\n';
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test=1;
    while(test--){
       awadh_solution();
    }
}