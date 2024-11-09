# include <bits/stdc++.h>
using namespace std;
 //accepted
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int n = 3e6+10;
vector <bool> vbool(n,false);

vector <int> v(310,0);
void awadh_solution(){
    int a,b;
    cin>>a>>b;
    int ans = 0;
    for(int i=0; i<a; i++)
    {
        cin>>v[i];
    }
    
    for(int i=0;i<a; i++)
    {
        vbool[v[i]]=true;
        for(int j =i+1; j<a;j++)
        {
            vbool[v[i]+v[j]]=true;
            for(int k =j+1; k<a; k++)
            {
                vbool[v[i]+v[j]+v[k]]=true;
                // cout<<' '<<v[i]+v[j]+v[k]<<' ';
            }
        }
    }


    for(int i =1; i<=b; i++)
    {
        if(vbool[i])
        {
            ans++;

        }
    }
    cout<<ans;

    


 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}