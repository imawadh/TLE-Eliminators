#include <bits/stdc++.h>
using namespace std;

// Define
#define loop(j) for(int i = 0; i < j; i++)

// Typedef
typedef long long ll;

void awadh_solution() {
    int size;
    cin >> size;
    map<int, int> m; 
    int max_value = 0; 

    
    for (int i = 0; i < size; i++) {
        int a;
        cin >> a;

        m[a]++;
    }

    for (auto& entry : m) {
        max_value = max(max_value, entry.second);
    }

    
    cout << max_value << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test = 1;
    while (test--) {
        awadh_solution();
    }
}
