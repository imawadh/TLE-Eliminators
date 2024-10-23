# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    string s;
    cin>>s;
    vector <int> v(26,0);
    for(int i =0; i<s.size(); i++)
    {
        v[s[i]-'a']++;
    }
    for(int i =0; i<26; i++)
    {
        for(int j =0; j<v[i]; j++)
        {
            
            cout<<char(i+'a');
        }
    }
}