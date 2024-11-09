#include <bits/stdc++.h>
using namespace std;

// Define
#define loop(j) for(int i = 0; i < j; i++)

// Typedef
typedef long long ll;

void awadh_solution(){
    int size;
    cin >> size; 
    string s;
    cin >> s; 
    
    int z = 0, o = 0; 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            z++;
        } 
        else {
            o++;
        }
    }
    
    
    
    
   
   if(z==o)
    {
         cout << 2 << '\n' << s[0] << ' ';
        for (int i = 1; i < s.size(); i++) {
            cout << s[i];
        }
        cout << '\n';
    }
    else {
        cout << 1 << '\n' << s << '\n';
       
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1; 
    while (test--) {
        awadh_solution();
    }
}
