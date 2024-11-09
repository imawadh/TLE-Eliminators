#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void awadh_solution() {
    string s1, s2;
    cin >> s1 >> s2;
    
    
        ll n1 = stoll(s1); 
        ll n2 = stoll(s2);
        
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
    
    int test = 1; // You can change this for multiple test cases
    while (test--) {
        awadh_solution();
    }
    return 0;
}
