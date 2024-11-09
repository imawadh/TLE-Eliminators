#include <bits/stdc++.h>
using namespace std;

// Define
#define loop(j) for(int i = 0; i < j; i++) ;

// Typedef
typedef long long ll;

void awadh_solution() {
    int n;  
    cin >> n;
    if(n==1)
    {
        string s;
        cin>>s;
        for(int i =0; i<s.size(); i++)
        {
            if(s[i]=='?')
            {
                cout<<'a';
            }
            else{
                cout<<s[i];
            }
        }
        cout<<'\n';
        return;
    }
    

    vector<string> messages(n);  
    for (int i = 0; i < n; i++) {
        cin>>messages[i];
    }

    int m = messages[0].size();  

    string result = "";  
    
    for (int j = 0; j < m; j++) {
        set<char> possible_chars;  
        for (int i = 0; i < n; i++) {
            if (messages[i][j] != '?') {
                possible_chars.insert(messages[i][j]);
            }
        }
        if (possible_chars.size() > 1) {
            result += '?';
        } 
        else if (possible_chars.size() == 1) {
            result += *possible_chars.begin();  
        } 
        else {
            result += 'x';  
        }
        
    }

    cout << result << '\n';  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test = 1;  
    while (test--) {
        awadh_solution();  
    }
}