# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    vector <int> v1(26,0);
    vector <int> v2(26,0);
    string s1,s2;
    cin>>s1>>s2;
    for(int i =0; i<s1.size(); i++)
    {
        v1[s1[i]-'a']+=1;
    }
    for(int i =0; i<s2.size(); i++)
    {
        v2[s2[i]-'a']+=1;
    }
    for(int i =0; i<26; i++)
    {
        if(v1[i]!=0 && v2[i]!=0)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";

 
 
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