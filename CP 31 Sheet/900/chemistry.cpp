# include <bits/stdc++.h>
using namespace std;
// not solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        vector <int> v(26,0);
        for(int i =0; i<s.size(); i++)
        {
            v[s[i]-'a']++;
        }
        for(int i =0; i<26; i++)
        {
            cout<<v[i]<<' ';
        }
        for(int i =0; i<26; i++)
        {
            if(v[i]%2)
            {
                b--;
            }
        }
        if(b==0 )
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
        
    }
}