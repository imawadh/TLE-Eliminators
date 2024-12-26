#include <bits/stdc++.h>
using namespace std;

// Define
#define loop(j) for(int i = 0; i < j; i++);

// Typedef
typedef long long ll;

void awadh_solution() {
    int l, r, k;
    cin >> l >> r >> k;
    
    // Variable to store the count of odd numbers between l and r
    int odd = 0;
    
    // Count the number of odd numbers between l and r
    odd += (r - l) / 2;

    // Adjust for boundaries
    if (l % 2 == 1 && r == 1) {
        odd++;
    } else if (l % 2 == 1) {
        odd++;
    } else if (r % 2 == 1) {
        odd++;
    }

    // Handle the cases
    if (l == 1 && r == 1) {
        cout << "NO\n";
    } else if (l == r) {
        cout << "YES\n";
    } else if (odd <= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin >> test;
    while (test--) {
        awadh_solution();
    }
}
