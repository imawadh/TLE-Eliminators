# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int a,b;
    cin>>a>>b;
    vector <int> v(a);
    for(int i =0; i<a; i++)
    {
        int x;
        cin>>x;
    }
    for(int i =0; i<a; i++)
    {
       cin>>v[i];
    }
    long long ans = 0;
    int i =--a;
    while(true)
    {
        if(i<0){
            break;
        }
        if(v[i]<b){
            ans+=b;
            i--;
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