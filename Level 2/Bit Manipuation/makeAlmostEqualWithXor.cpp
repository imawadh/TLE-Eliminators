# include <bits/stdc++.h>
using namespace std;

// Define
#define  loop(j) for(int i =0; i<j; i++) ; 
// Typedef
typedef long long  ll;
// accpeted 
void awadh_solution(){
    int n;
    cin>>n;
    vector <long long> v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    for(int i =0; i<64; i++){
        set<long long> st;
        long long num = 1LL<<i;
        for(int j =0; j<n; j++){
            st.insert(v[j]%num);
        }
        if(st.size()==2){
            cout<<(1LL<<(i))<<'\n';
            return;
        }
    }
 
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