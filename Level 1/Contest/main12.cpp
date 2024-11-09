# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int size;
    cin>>size;
    vector <int>  v(size);
    int odd = 0,even = 0;
    for(int i =0; i<size; i++)
    {
        cin>>v[i];
        if(v[i]%2==1){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd>0 && even>0)
    {
        sort(v.begin(),v.end());
    }
    for(int i =0; i<size; i++)
    {
        cout<<v[i]<<' ';
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