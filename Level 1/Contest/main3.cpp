#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void awadh_solution() {
    string s1, s2;
    cin >> s1 >> s2;
    string s11,s22;
    int ct = 0;
    if(s1.size()>8)
    {
        for(int i= s1.size()-7; i<s1.size(); i++)
        {
            
            
            s11.push_back(s11[ct]);
            ct++;

        }
    }
    else{
        s11=s1;
    }

    ct = 0; 
    if(s2.size()>8)
    {
        for(int i= s2.size()-7; i<s2.size(); i++)
        {
            
            
            s22.push_back(s22[ct]);
            ct++;

        }
    }
    else{
        s22=s2;
    }

    
    
        ll n1 = stoll(s11); 
        ll n2 = stoll(s22);
        
        if (n1 == n2) {
            cout << "=\n";
        } else if (n1 < n2) {
            cout << "<\n";
        } else {
            cout << ">\n";
        }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1; 
    while (test--) {
        awadh_solution();
    }
    return 0;
}
