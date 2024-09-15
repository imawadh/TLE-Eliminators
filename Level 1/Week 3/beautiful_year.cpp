#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    set<int> myset;
    
    for (int i = test+1; ; i++) {
        int num = i;
        while (num > 0) {
            myset.insert(num % 10);
            num = num / 10;
        }

        if (myset.size() == 4) {
            cout<<i;
            break;
            
        }
        myset.clear();
       
        
    }

    return 0;
}
