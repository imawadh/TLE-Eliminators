#include <bits/stdc++.h>
using namespace std;
// solved

int main() {
    int a, b;
    cin >> a >> b;
    
    set<pair<int, int>> s;
    int arr[b][a];
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < b; i++) {
        for (int j = 1; j < a; j++) {
            s.insert(make_pair(min(arr[i][j - 1], arr[i][j]), max(arr[i][j - 1], arr[i][j])));  
        }
    } 
    
    int totalPairs = a * (a - 1) / 2;
    cout << totalPairs - s.size() << '\n';
    
    return 0;
}
