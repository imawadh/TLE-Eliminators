# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
vector<string> ans;
void helper(int i, int n, vector<int>&v,string sub){
    if(i==n){
        if(sub.size()==n){
            ans.push_back(sub);
        }
        return;
    }
    for (int c = 0; c < 26; c++) {
        if (v[c] > 0) {
            v[c]--;
            sub.push_back('a' + c);
            helper(i + 1, n, v, sub);
            sub.pop_back();
            v[c]++;
        }
    }
    return;

}
void awadh_solution(){
    string s;
    cin>>s;
    int n = s.size();
    string sub = "";
    vector<int> v(26,0);
    for(int i =0; i<n; i++){
        v[s[i]-'a']++;
    }
    helper(0,n,v,sub);
    cout<<ans.size()<<'\n';
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<'\n';
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