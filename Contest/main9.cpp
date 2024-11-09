# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    vector <int> v(3);
    for(int i =0; i<3; i++)
    {
       cin>>v[i];
        
    }
    sort(v.begin(),v.end());
    bool flag =  true;
    int ct = 0;
    if(v[1]%v[0]!=0)
    {
        flag= false;
        
    }
    if(v[2]%v[0]!=0)
    {
        flag= false;
       
    }
    ct+=(v[1]/v[0]-1);
     ct+=(v[2]/v[0]-1);
   
    if(!flag || ct>3)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    
    
 
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