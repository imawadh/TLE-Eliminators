# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;



 
int main(){
    
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int s =1;
    vector<int> v(1010,0);
    int j = 1;
    for(int i =1; i<=1666; i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            v[j++]=i;
        }
    }
    int test;
    cin>>test;
    while(test--){
       int num;
       cin>>num;
       cout<<v[num]<<'\n';
    }
}