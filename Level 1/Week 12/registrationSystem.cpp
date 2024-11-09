# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void awadh_solution(){
    int n;
    cin>>n;
    map<string,long long> m;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(m.find(s)!=m.end())
        {
            m[s]++;
            cout<<s<<m[s]<<'\n';
        }
        else{
            cout<<"OK"<<'\n';
            m[s]=0;
        }

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