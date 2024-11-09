#include <bits/stdc++.h>
using namespace std;

// Define
#define loop(j) for(int i = 0; i < j; i++) ;

// Typedef
typedef long long ll;

// Global string
string s="0";


void initialize() {
    
    for (int i = 0; i < 1000; i++) {
        s+=to_string(i + 1);  
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    initialize();
    int i;
    cin>>i;
    cout<<s[i]<<'\n';
}
