# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        vector <int> v(26,0);
        for(int i =0; i<s.size(); i++)
        {
            v[s[i]-'a']+=1;
        }
        int ans = 0;
        int ct  =0;
        for(int i =0; i<26; i++)
        {
           if(v[i]>=2)
           {
            ans++;
           }
           else if(v[i]==1)
           {
            ct++;
           }
        }
        cout<<ans+ct/2<<'\n';
    }
}